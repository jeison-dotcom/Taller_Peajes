#pragma once

#include<iostream>
#include<string>

#include "Propietario.hpp"

using namespace std;

class Vehiculo
{
    protected:
    string placa;
    Propietario* propietario;

    public:
    Vehiculo(Propietario* propietario, string placa);
    
    virtual~Vehiculo();

    virtual string getTipo() const = 0;
    string getPlaca() const;

    void setPlaca(string);

    virtual int cobrar()const;
    virtual void informacion() const = 0;
};
ostream &operator << (ostream &os, Vehiculo & Vehiculo);