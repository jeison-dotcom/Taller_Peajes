#include "Camion.hpp"

Camion::Camion(Persona* propietario, string placa, int ejes): Vehiculo(propietario, placa), ejes(ejes)
{
    if (ejes < 1) throw EjesInvalidosException(ejes);
}
Camion::~Camion() {}

void Camion::setEjes(int ejes) { this->ejes = ejes; }
int Camion::getEjes() const { return ejes; }
string Camion::getTipo() const { return "Camion"; }

void Camion::agregarEje() { this->ejes++; }

int Camion::cobrar() const
{
    int total = (20000 + 500 * DESENA) * ejes;

    return total;
}