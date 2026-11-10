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

    public:
    Peaje(vector<Vehiculo*>& vehiculos);

    void AgregarOperador();
    void registrarPropietario();
    void RegistarVehiculo();
    void GenerarResivo();
};