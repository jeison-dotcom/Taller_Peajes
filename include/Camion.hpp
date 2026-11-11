#pragma once;

#include <iostream>
#include <string>
#include "Persona.hpp"
#include "Vehiculo.hpp"
#include "Variante.hpp"

using namespace std;

class Camion : public Vehiculo
{
    private:
    int ejes;

    public:
    Camion(Persona* propietario, string placa, int ejes);
    ~Camion();

    void setEjes(int ejes);
    int getEjes() const;
    string getTipo() const override;

    void agregarEje();
    int cobrar() const override;
    string informacion() const override;

};