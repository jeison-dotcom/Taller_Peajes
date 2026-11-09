#pragma once

#include "Vehiculo.hpp"
#include "Variante.hpp"

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

    int cobrar() const override;
    void informacion() const override;

};