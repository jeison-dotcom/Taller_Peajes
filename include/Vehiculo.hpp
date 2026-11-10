#pragma once

#include<iostream>
#include<string>

#include "Propietario.hpp"

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
    Persona* getPropietario() const;
    void setPropietario(Persona* propietario);
    void setPlaca(const string& p);

    virtual int cobrar()const = 0;
    virtual void informacion() const = 0;
};
//ostream &operator << (ostream &os, Vehiculo & Vehiculo);