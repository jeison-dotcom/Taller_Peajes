#include "Registro.hpp"

Registro::Registro(string placa, string tipo, int cobro): placa(placa), tipo(tipo), cobro(cobro) {}
Registro::~Registro() {}

void Registro::setPlaca(string placa) {placa = placa;}
void Registro::setTipo(string tipo) {tipo = tipo;}
void Registro::setCobro(int cobro) {cobro = cobro;}

string Registro::getPlaca() const {return placa;}
string Registro::getTipo() const {return tipo;}
int Registro::getCobro() const {return cobro;}