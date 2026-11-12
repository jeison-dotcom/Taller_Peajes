#include "Caseta.hpp"

Caseta::Caseta(vector<Registro> registros, Persona* operador):registros(registros), operador(operador){}
Caseta::~Caseta(){}

void Caseta::setOperador(Persona* operador){this->operador = operador;}


void Caseta::agregarRegistro(Vehiculo* v)
{
    if (v == nullptr) return;
    registros.emplace_back(v->getPlaca(), v->getTipo(), v->cobrar());
}

void Caseta::mostrarRegistros() const
{
    cout << "Registros de la caseta:" << endl;
    cout << *operador << endl;

    for (int i = 0; i < registros.size(); ++i)
    {
        cout << "==========================================================" << endl;
        cout << registros[i] << endl;
        cout << "==========================================================" << endl;

        //cout << "Operador: " << operador->getNombre(); // << ", Codigo: " << operador->getCodigo() << endl;
        //cout << operador->getDescripcion() << endl;
        //cout << "Placa: " << registro.getPlaca() << ", Tipo: " << registro.getTipo() << ", Cobro: " << registro.getCobro() << endl;
    }
}
