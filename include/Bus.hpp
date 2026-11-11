#pragma once

#include <iostream>
#include <string>
#include "Persona.hpp"
#include "Vehiculo.hpp"
#include "Variante.hpp"

using namespace std;

class Bus : public Vehiculo
{
    private:
    int puestos;

    public:
    Bus(Persona* propietario, string placa, int puestos);
    ~Bus();

    void setPuestos(int puestos);
    int getPuestos() const;
    string getTipo() const override;

    int cobrar() const override;
    string informacion() const override;
};