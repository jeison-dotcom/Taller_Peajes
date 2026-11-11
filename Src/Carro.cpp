#include "../include/Carro.hpp"

Carro::Carro(Persona* propietario, string placa, int pasajeros): Vehiculo(propietario, placa), pasajeros(pasajeros)
{
    if (pasajeros < 1)throw PasajerosInvalidosException(pasajeros);
}
Carro::~Carro(){}

void Carro::setPasajeros(int p)
{
    if (p < 1){throw PasajerosInvalidosException(p);}
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
    int total = 10000 + (200 * UNIDAD);
    // Bloque echo por IA
    if (propietario != nullptr) {
        Propietario* p = dynamic_cast<Propietario*>(propietario);
        if (p != nullptr && p->esVecino())
            total = total * 80 / 100;
    }
    return total;
}

string Carro::informacion() const
{
    return getTipo() + " - " + Vehiculo::informacion() +" - Pasajeros: " + to_string(pasajeros);
}