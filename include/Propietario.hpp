#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Persona.hpp"

class Peaje;

class Propietario : public Persona
{
    private:
    bool vecino;

    public:
    Propietario(string nombre, string id, bool vecino);
    ~Propietario();

    bool esVecino() const;
    string getDescriccion() const override;
};