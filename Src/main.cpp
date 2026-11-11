#include <iostream>
#include <string>

#include "../include/Vehiculo.hpp"
#include "../include/Carro.hpp"
#include "../include/Persona.hpp"
#include "../include/Propietario.hpp"

using namespace std;

int main()
{
    vector<Vehiculo*> vehiculos;
    vector<Persona*> personas;

    Persona* p1 = new Propietario("Jeison","1058",false);
    Vehiculo* v1 = new Carro(p1,"AAA123",2);
    /*
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
    */
    

    return 0;
}