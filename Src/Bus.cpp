#include "Bus.hpp"
Bus::Bus(Persona* propietario, string placa, int puestos): Vehiculo(propietario, placa), puestos(puestos)
{
    if (puestos < 1) throw PuestosInvalidosException(puestos);
}
Bus::~Bus() {}

void Bus::setPuestos(int puestos)
{
    if (puestos < 1) throw PuestosInvalidosException(puestos);
    this->puestos = puestos;
}
int Bus::getPuestos() const { return puestos; }
string Bus::getTipo() const { return "Bus"; }

int Bus::cobrar() const
{
    int total = 14000 + 300 * DESENA;
    return total;
}

string Bus::informacion() const
{
    return getTipo() + " - " + Vehiculo::informacion() + " - Puestos: " + to_string(puestos);
}