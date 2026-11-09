#pragma once

#include <iostream>
#include <string>
#include "Vehiculo.hpp"

class Peaje
{
    private:
    Vehiculo* vehiculo;

    public:
    void GenerarResivo();
};