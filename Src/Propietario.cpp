#include "../include/Propietario.hpp"

Propietario::Propietario(string nombre, string id, bool vecino):Persona(nombre, id), vecino(vecino){}
Propietario::~Propietario(){}

bool Propietario::esVecino() const {return vecino;}

string Propietario::getDescriccion() const
{
    return "Propietario: " + nombre + ", ID: " + id +", vecino: " + (vecino ? "si" : "no");
}