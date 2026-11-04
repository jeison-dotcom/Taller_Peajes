#pragma once

#include<iostream>
#include<string>
//#include<vector>

using namespace std;

class Vehiculo
{
    protected:
    string placa;

    public:
    Vehiculo(string placa);

    virtual~Vehiculo();
    virtual string getTipo();
    virtual int cobrar()const;
    virtual string info() const;

    string getPlaca() const;
    void setPlaca();

};
ostream &operator << (ostream &os, Vehiculo & Vehiculo);