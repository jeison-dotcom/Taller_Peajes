#include "../include/Emergencia.hpp"

Emergencia::Emergencia(string unidad, string descriccion, bool enEmergencia):unidad(unidad), descriccion(descriccion), enEmergencia(enEmergencia) {}
Emergencia::~Emergencia(){}

string Emergencia::getUnidad() const{return unidad;}
string Emergencia::getDescriccion() const{return descriccion;}
bool Emergencia::getEnEmergencia() const{return enEmergencia;}

void Emergencia::setEnEmergencia(bool enEmergencia) { this->enEmergencia = enEmergencia; }
