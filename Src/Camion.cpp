#include "Camion.hpp"

Camion::Camion(Persona* propietario, string placa, int ejes): Vehiculo(propietario, placa), ejes(ejes)
{
    if (ejes < 2) throw EjesInvalidosException(ejes);
}
Camion::~Camion() {}

void Camion::setEjes(int ejes) { this->ejes = ejes; }
int Camion::getEjes() const { return ejes; }
string Camion::getTipo() const { return "Camion"; }

void Camion::agregarEje() { this->ejes++; }

int Camion::cobrar() const
{
    int total = (8000 + 500 * DESENA) * ejes;

    return total;
}

string Camion::informacion() const
{
    return getTipo() + " - " + Vehiculo::informacion() + " - Ejes: " + to_string(ejes);
}