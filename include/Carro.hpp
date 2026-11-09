#pragma once

#include "Vehiculo.hpp"
#include "Variante.hpp"

class Carro : public Vehiculo
{
    private:
    int pasajeros;
    public:
    Carro(string placa, int pasajeros);
    ~Carro();
    void setPasajeros(int pasajeros);
    int getPasajeros() const;
    string getTipo() const override;
    string informacion() const override;
    int cobrar() const override;
};