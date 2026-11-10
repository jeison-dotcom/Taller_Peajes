#include "../include/Peaje.hpp"

Peaje::Peaje(vector<Vehiculo*>& vehiculos) : vehiculos(vehiculos){}

void Peaje::AgregarOperador(){}
void Peaje::registrarPropietario(){}
void Peaje::RegistarVehiculo()
{
    string placa;
    cout << "Placa: "; cin >> placa; 

    //Persona* p1 = new Propietario("jeison","1058","Popayan");
    Propietario* p1 = new Propietario("jeison", "1058", "Popayan");
    vehiculos.emplace_back(new Carro(p1,placa,2));
}
void Peaje::GenerarResivo(){}