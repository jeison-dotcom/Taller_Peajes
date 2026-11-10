#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Persona.hpp"

class Peaje;

class Propietario : public Persona
{
    private:
    string ciudad;

    public:
    Propietario(string nombre, string id, string ciudad);
    ~Propietario();

    string getDescriccion() const override;
    bool esVecino(const vector<string>& ciudadesVecinas) const;
};