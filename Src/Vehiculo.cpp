#include "../include/Vehiculo.hpp"

Vehiculo::Vehiculo(string placa):placa(placa){}
Vehiculo::~Vehiculo(){}

string Vehiculo::getPlaca() const{return placa;}
void Vehiculo::setPlaca(string placa){this->placa = placa;}

int Vehiculo::cobrar()const{return 5000;}
string Vehiculo::informacion() const
{
    return getPlaca();
}