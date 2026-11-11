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
    Persona* operador;
    public:
    Caseta(vector<Registro> registros, Persona* operador);
    ~Caseta();

    void setOperador(Persona* operador);
    //void agregarRegistro(Registro reistro);
    
};