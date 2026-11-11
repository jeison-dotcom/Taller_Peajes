#include "Registro.hpp"

Registro::Registro(string placa, string tipo, int cobro): placa(placa), tipo(tipo), cobro(cobro) {}
Registro::~Registro() {}

void Registro::setPlaca(string placa) {this->placa = placa;}
void Registro::setTipo(string tipo) {this->tipo = tipo;}
void Registro::setCobro(int cobro) {this->cobro = cobro;}

string Registro::getPlaca() const {return placa;}
string Registro::getTipo() const {return tipo;}
int Registro::getCobro() const {return cobro;}


/*
void Registro::registarVehiculo(Vehiculo* &v)
{
    this->placa = v->getPlaca();
    this->tipo = v->getPlaca();
    this ->cobro = getCobro();
}
*/

string Registro::informacion() const
{
    return "Registro - Placa: " + placa + ", Tipo: " + tipo + ", Cobro: " + to_string(cobro);
}

ostream &operator << (ostream &os, Registro registro)
{
    os << registro.informacion();
    return os;
}
