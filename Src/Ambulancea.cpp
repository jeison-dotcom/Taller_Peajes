#include "../include/Ambulacea.hpp"
Ambulancea::Ambulancea(Persona* propietario, string placa, string unidad, string descriccion, bool enEmergencia)
    : Vehiculo(propietario, placa), Emergencia(unidad, descriccion, enEmergencia) {}
Ambulancea::~Ambulancea() {}

bool Ambulancea::getEnEmergencia() { return Emergencia::getEnEmergencia(); }

int Ambulancea::cobrar() const
{
    int total = 10000 + 200 * UNIDAD;

    if(Emergencia::getEnEmergencia() == true){return 0;}


    if (propietario != nullptr && propietario->esVecino()) {
        total = total * (100 - (30 + CENTENA)) / 100;
    }
    return total;
}

string Ambulancea::getTipo() const {return "Ambulancea";}

string Ambulancea::informacion() const
{
    return getTipo() + " - " + Vehiculo::informacion() + " " + "en emergencia " + (Emergencia::getEnEmergencia() ? "si" : "no");
}

