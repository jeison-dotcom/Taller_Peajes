#pragma once

#include<iostream>
#include<string>

using namespace std;

class Vehiculo
{
    protected:
    string placa;

    public:
    Vehiculo(string placa);
    
    virtual~Vehiculo();

    virtual string getTipo() const = 0;
    string getPlaca() const;

    void setPlaca(string);

    virtual int cobrar()const;
    virtual string informacion() const;
};
ostream &operator << (ostream &os, Vehiculo & Vehiculo);