#include "../include/Propietario.hpp"

Propietario::Propietario(string nombre, string id, bool vecino):Persona(nombre, id), vecino(vecino){}
Propietario::~Propietario(){}

string Propietario::getDescriccion() const
{
    string descripcion;
    cout << "descripcion: "; cin >> descripcion;
    return descripcion;
}