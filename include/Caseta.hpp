#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Persona.hpp"
#include "Registro.hpp"

using namespace std;

class Caseta
{
    private:
    vector<Registro> registros;
    vector<Persona*>& personas;
    vector<Vehiculo*>& vehiculos;
    Persona* operador;
    public:
    Caseta(vector<Registro> registros, vector<Persona*>& personas, vector<Vehiculo*>& vehiculos, Persona* operador);
    ~Caseta();

    void setOperador(Persona* operador);
    void agregarRegistro(Vehiculo* v);
    int calcularRecaudoTotal() const;
    //void agregarRegistro(Registro& registro);
    
    void mostrarRegistros() const;
};