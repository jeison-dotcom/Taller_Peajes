#include "Caseta.hpp"

Caseta::Caseta(vector<Registro> registros, Persona* operador):registros(registros), operador(operador){}
Caseta::~Caseta(){}

void Caseta::setOperador(Persona* operador){this->operador = operador;}

/*
void Caseta::agregarRegistro(Registro registro)
{
    registros.emplace_back();
}
*/
