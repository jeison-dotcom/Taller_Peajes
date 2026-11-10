#include <iostream>
#include <string>

/*
#include <vector>
#include "Vehiculo.cpp"
#include "Carro.cpp"
#include "Persona.cpp"
#include "Propietario.cpp"
*/

#include "../include/Peaje.hpp"

using namespace std;

int main()
{
    Peaje peaje;
    try {
        peaje.registrarPropietario("Jeison", "1058", "Popayan");
        peaje.registrarCarro("CPP17", 2, 0);
        peaje.registrarCarro("XYZ99", 4, 0);
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
        return 1;
    }

    cout << "Recaudado: " << peaje.getRecaudado() << endl;
    return 0;
}