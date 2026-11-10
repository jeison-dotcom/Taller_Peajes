#pragma once

#include <iostream>
#include <string>
#include "Persona.hpp"

class Propietario : public Persona
{
    private:
    string ciudad;
    public:
    Propietario(string nombre, string id, string ciudad);
    ~Propietario();
};