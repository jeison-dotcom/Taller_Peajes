#include "../include/Carro.hpp"

Carro::Carro(Propietario* propietario,string placa, int pasajeros):Vehiculo(propietario,placa),pasajeros(pasajeros){}
Carro::~Carro(){}

void Carro::setPasajeros(int pasajeros){this-> pasajeros = pasajeros;}
int Carro::getPasajeros() const{return pasajeros;}
string Carro::getTipo() const{return "Carro";}

int Carro::cobrar() const
{
    int total;
    bool descuento = false; // debe ser cambiada por una funcion mas adelante;
    total =  10000+(200*UNIDAD);
    if(descuento)
    {
        total = total * 80 / 100;
    }
    return total;
}

void Carro::informacion() const
{
    
    cout << getTipo() <<"  " << this->placa << "  " << this->pasajeros << " Pasajeros" << endl;
}