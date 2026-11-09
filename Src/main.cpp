#include <iostream>
#include <string>
#include <vector>
#include "Vehiculo.cpp"
#include "Carro.cpp"


using namespace std;

int main()
{
    vector <Vehiculo*> vehiculos;
    Persona persona1("Jeison","1058");

    Vehiculo* vehiculo = new Carro(&persona1,"CPP17",2);

    vehiculos.emplace_back();

    vehiculo[0].getTipo();
    vehiculo[0].informacion();

}