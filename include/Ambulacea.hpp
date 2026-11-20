#pragma once

#include <iostream>
#include <string>

#include "Vehiculo.hpp"
#include "Emergencia.hpp"
#include "Variante.hpp"

using namespace std;

class Ambulancea : public Vehiculo, public Emergencia
{
    public:
    Ambulancea(Persona* propietario, string placa, string unidad, string descriccion, bool enEmergencia);
    ~Ambulancea();


    bool getEnEmergencia();


    int cobrar() const override;
    string getTipo() const override;
    string informacion() const override;

};