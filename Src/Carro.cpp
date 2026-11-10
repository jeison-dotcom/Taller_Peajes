#include "../include/Carro.hpp"

Carro::Carro(Propietario* propietario,string placa, int pasajeros):Vehiculo(propietario,placa),pasajeros(pasajeros){}
Carro::~Carro(){}

void Carro::setPasajeros(int pasajeros){this-> pasajeros = pasajeros;}
int Carro::getPasajeros() const{return pasajeros;}
string Carro::getTipo() const{return "Carro";}

int Carro::cobrar() const{return 10000+(200*UNIDAD);}

void Carro::informacion() const
{
    
    cout << getTipo() <<"  " << this->placa << "  " << this->pasajeros << " Pasajeros" << endl;
}