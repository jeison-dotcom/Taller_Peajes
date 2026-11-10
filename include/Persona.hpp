#pragma once

#include <iostream>
#include <string>

using namespace std;

class Persona
{
    protected:
    string nombre;
    string id;

    public:
    Persona(string nombre, string id);
    virtual~Persona();
    
    virtual string getDescriccion() const = 0;
    string getNombre() const;
    string getID() const;
    
};