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

    bool esVecino(const std::vector<std::string>& ciudadesVecinas) const;
};