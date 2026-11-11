#include "Caseta.hpp"

Caseta::Caseta(vector<Registro> registros, Persona* operador):registros(registros), operador(operador){}
Caseta::~Caseta(){}

void Caseta::setOperador(Persona* operador){this->operador = operador;}

void Caseta::agregarRegistro(Registro& registro)
{
    registros.push_back(registro);
}

void Caseta::mostrarRegistros() const
{
    cout << "Registros de la caseta:" << endl;
    for (const auto& registro : registros)
    {
        cout << "Placa: " << registro.getPlaca() << ", Tipo: " << registro.getTipo() << ", Cobro: " << registro.getCobro() << endl;
    }
}
