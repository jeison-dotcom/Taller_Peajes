#pragma once

#include <iostream>
#include <string>

#include "Persona.hpp"

using namespace std;

class Operador : public Persona
{
    private:
    string codigo;
    public:
    Operador(string nombre, string id, string codigo);
    ~Operador();

    string getCodigo() const;

    string getDescriccion() const override;
};