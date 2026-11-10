#include "../include/Vehiculo.hpp"

Vehiculo::Vehiculo(Propietario* propietario, string placa) : propietario(propietario), placa(placa) {}
Vehiculo::~Vehiculo(){}

string Vehiculo::getPlaca() const{return placa;}
void Vehiculo::setPlaca(string placa){this->placa = placa;}

int Vehiculo::cobrar()const{return 0;}