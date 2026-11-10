#include <iostream>
#include <string>
#include <vector>
#include "Vehiculo.cpp"
#include "Carro.cpp"
#include "Persona.cpp"
#include "Propietario.cpp"
#include "Peaje.cpp"


using namespace std;

int main()
{

    vector <Vehiculo*> vehiculos;
    Peaje peajeCerroVerde(vehiculos);
    peajeCerroVerde.RegistarVehiculo();


    //Propietario persona1("Jeison","1058","Popayan");

    //Vehiculo* vehiculo = new Carro(&persona1,"CPP17",2);

    //vehiculos.emplace_back();

    //vehiculo[0].getTipo();
    //vehiculo[0].informacion();

}