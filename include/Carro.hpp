#pragma once

#include "Vehiculo.hpp"

class Carro : public Vehiculo
{
    private:
    int pasajeros;
    public:
    Carro(string placa, int pasajeros);
    ~Carro();
    void setPasajeros();
    int getPasajeros() const;
    string info() const override;
};