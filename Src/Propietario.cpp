#include "../include/Propietario.hpp"

Propietario::Propietario(string nombre, string id, string ciudad):Persona(nombre, id), ciudad(ciudad){}
Propietario::~Propietario(){}

bool Propietario::esVecino(const vector<string>& ciudadesVecinas) const
{
    for (const string& ciudadVecina : ciudadesVecinas) {
        if (ciudad == ciudadVecina) {
            return true;
        }
    }
    return false;
}