#pragma once

#include <iostream>
#include <string>
#include "Vehiculo.hpp"
#include "Variante.hpp"

using namespace std;

class Moto : public Vehiculo
{
    private:
    int cilindraje;
    bool altoCilindraje;
    
    public:
    Moto(Persona* propietario, string placa, int cilindraje);
    ~Moto();

    void setCilindraje(int cilindraje);
    int getCilindraje() const;
    string getTipo() const override;

    bool esAltoCilindraje() const;
    int cobrar() const override;
    string informacion() const override;
};