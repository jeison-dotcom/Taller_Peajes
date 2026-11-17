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
    
    string getNombre() const;
    string getID() const;

    virtual bool esVecino() const;
    virtual string getDescriccion() const;
    
};
ostream &operator << (ostream &os, Persona & persona);