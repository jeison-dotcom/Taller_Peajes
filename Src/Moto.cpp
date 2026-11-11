#include "Moto.hpp"

Moto::Moto(Persona* propietario, string placa, int cilindraje): Vehiculo(propietario, placa), cilindraje(cilindraje) {}
Moto::~Moto() {}

void Moto::setCilindraje(int cilindraje) { this->cilindraje = cilindraje; }
int Moto::getCilindraje() const { return cilindraje; }
string Moto::getTipo() const { return "Moto"; }


bool Moto::esAltoCilindraje() const { return (cilindraje > 400 ? true : false); }

int Moto::cobrar() const 
{
    int total = 3000 + 100 * UNIDAD;

    if (propietario != nullptr)
    {
        Propietario* p = dynamic_cast<Propietario*>(propietario);
        if (p != nullptr && p->esVecino())
            total = total * (100 - CENTENA) / 100;
    }
    return total;
}
string Moto::informacion() const
{
    return "Tipo: " + getTipo() + ", Placa: " + getPlaca() + ", Cilindraje: " + to_string(cilindraje)
    + ",Clindraje alto?: " + (esAltoCilindraje() ? "Si" : "No");;
}