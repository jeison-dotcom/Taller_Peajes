#pragma once

#include <iostream>
#include <string>

using namespace std;

class Registro
{
    private:
    std::string placa;
    std::string tipo;
    int cobro;
    public:
    Registro(string placa, string tipo, int cobro);
    ~Registro();
    void setPlaca(string placa);
    void setTipo(string tipo);
    void setCobro(int cobro);

    string getPlaca() const;
    string getTipo() const;
    int getCobro() const;
};
