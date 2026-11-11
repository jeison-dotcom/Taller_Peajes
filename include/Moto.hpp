#pragma once

#include <iostream>
#include <string>
#include "Vehiculo.hpp"

using namespace std;

class Moto : public Vehiculo
{
    private:
    int cilindraje;
    
    public:
    Moto(Persona* propietario, string placa, int cilindraje);
    ~Moto();
};