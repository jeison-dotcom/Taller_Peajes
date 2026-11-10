#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Vehiculo.hpp"
#include "Carro.hpp"
#include "Persona.hpp"
#include "Propietario.hpp"

class Peaje
{
    private:
    vector<Vehiculo*> vehiculos;
    vector<string> ciudadesVcinas = {"Popayan","Cali","El Tambo"};

    public:
    Peaje();
    ~Peaje();

    void AgregarOperador();
    void registrarPropietario();
    void RegistarVehiculo();
    void GenerarResivo();
};