#include "../include/Carro.hpp"

Carro::Carro(string placa, int pasajeros):Vehiculo(placa),pasajeros(pasajeros){}
Carro::~Carro(){}

void Carro::setPasajeros(int pasajeros){this-> pasajeros = pasajeros;}
int Carro::getPasajeros() const{return pasajeros;}

string Carro::getTipo() const
{
    return "Carro";
}

string Carro::informacion() const
{
    return getPlaca();
}
int Carro::cobrar() const
{
    return 10000+(200*UNIDAD);
}