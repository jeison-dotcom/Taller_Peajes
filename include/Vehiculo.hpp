#pragma once

#include<iostream>
#include<string>

#include "Persona.hpp"

using namespace std;

class Vehiculo
{
    protected:
    string placa;
    Persona* propietario;

    public:
    Vehiculo(Persona* propietario, string placa);
    
    virtual~Vehiculo();

    virtual string getTipo() const = 0;
    string getPlaca() const;

    void setPlaca(string);

    virtual int cobrar()const;
    virtual void informacion() const = 0;
};
ostream &operator << (ostream &os, Vehiculo & Vehiculo);