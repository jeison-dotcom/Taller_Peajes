#pragma once

#include "Vehiculo.hpp"
#include "Variante.hpp"
#include "Propietario.hpp"
#include "Persona.hpp"

class Carro : public Vehiculo
{
    private:
    int pasajeros;

    public:
    Carro(Persona* propietario,string placa, int pasajeros);
    ~Carro();

    void setPasajeros(int pasajeros);
    int getPasajeros() const;
    string getTipo() const override;

    void subriPasajero();
    int cobrar() const override;
    string informacion() const override;

};