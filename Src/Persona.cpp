#include "../include/Persona.hpp"

Persona::Persona(string nombre, string id):nombre(nombre),id(id){}
Persona::~Persona(){}

string Persona::getNombre() const {return nombre;}
string Persona::getID() const {return id;}

string Persona::getDescriccion() const
{
    return "Persona: " + nombre + ", ID: " + id;
}

ostream &operator << (ostream &os, Persona & persona)
{
    os << persona.getDescriccion();
    return os;
}