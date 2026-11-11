#include "Caseta.hpp"

Caseta::Caseta(vector<Registro> registros, Persona* operador):registros(registros), operador(operador){}
Caseta::~Caseta(){}

void Caseta::setOperador(Persona* operador){this->operador = operador;}


void Caseta::agregarRegistro(Vehiculo* &v)
{
    Registro registro(v->getPlaca(), v->getTipo(), v->cobrar());
    registros.push_back(registro);
}

void Caseta::mostrarRegistros() const
{
    cout << "Registros de la caseta:" << endl;
    for (int i = 0; i < registros.size(); ++i)
    {
        cout << "_________________________________________________________" << endl;
        cout << *operador << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << registros[i] << endl;
        cout << "_________________________________________________________" << endl;

        //cout << "Operador: " << operador->getNombre(); // << ", Codigo: " << operador->getCodigo() << endl;
        //cout << operador->getDescripcion() << endl;
        //cout << "Placa: " << registro.getPlaca() << ", Tipo: " << registro.getTipo() << ", Cobro: " << registro.getCobro() << endl;
    }
}
