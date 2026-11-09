#pragma once

#include <iostream>
#include <string>

using namespace std;

class Persona
{
    protected:
    string nombre;
    string id;

    public:
    Persona(string nombre, string id);
    ~Persona();
};