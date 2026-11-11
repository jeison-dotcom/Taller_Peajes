#include "../include/Vehiculo.hpp"

Vehiculo::Vehiculo(Persona* propietario, string placa) : placa(placa), propietario(propietario) {}
Vehiculo::~Vehiculo(){}

string Vehiculo::getPlaca() const { return placa; }
void Vehiculo::setPlaca(const string& p) { placa = p; }
Persona* Vehiculo::getPropietario() const { return propietario; }
void Vehiculo::setPropietario(Persona* p) { propietario = p; }

string Vehiculo::informacion() const
{
    return " placa" + this->placa + " ";
}

ostream &operator << (ostream &os, Vehiculo & Vehiculo)
{
    os << Vehiculo.informacion();
    return os;
}