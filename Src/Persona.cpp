#include "../include/Persona.hpp"

Persona::Persona(string nombre, string id):nombre(nombre),id(id){}
Persona::~Persona(){}

string Persona::getNombre() const {return nombre;}
string Persona::getID() const {return id;}