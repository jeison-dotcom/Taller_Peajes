#pragma once

#include <iostream>
#include <string>

using namespace std;

class Emergencia
{
    private:
    string unidad;
    string descriccion;
    bool enEmergencia;
    
    public:
    Emergencia(string unidad, string descriccion, bool enEmergencia);
    ~Emergencia();

    string getUnidad() const;
    string getDescriccion() const;
    bool getEnEmergencia() const;

    void setEnEmergencia(bool enEmergencia);
};