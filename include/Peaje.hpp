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
    vector<Persona*> personas;
    vector<string> ciudadesVcinas = {"Popayan","Cali","El Tambo"};

    public:
    Peaje();
    ~Peaje();

    void AgregarOperador();
    //void registrarPropietario();
    //void RegistarVehiculo(vector<Persona*> &personas);
    void GenerarResivo();
    void registrarPropietario(const string& nombre, const string& id, const string& ciudad);
    void registrarCarro(const string& placa, int pasajeros, size_t idxPropietario);
    int  getRecaudado() const;   // suma cobrar() de todos
};