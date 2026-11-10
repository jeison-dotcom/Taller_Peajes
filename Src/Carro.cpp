#include "../include/Carro.hpp"

Carro::Carro(Persona* propietario, string placa, int pasajeros)
    : Vehiculo(propietario, placa), pasajeros(pasajeros) {
    if (pasajeros < 1) throw std::invalid_argument("Pasajeros >= 1");
}
Carro::~Carro() {}
void Carro::setPasajeros(int p) {
    if (p < 1) throw std::invalid_argument("Pasajeros >= 1");
    pasajeros = p;
}

int Carro::getPasajeros() const{return pasajeros;}
string Carro::getTipo() const{return "Carro";}

void Carro::subriPasajero()
{
    this->pasajeros++;
}

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