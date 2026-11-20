#include "Caseta.hpp"

Caseta::Caseta(vector<Registro> registros, vector<Persona*>& personas, vector<Vehiculo*>& vehiculos, Persona* operador)
    : registros(registros), personas(personas), vehiculos(vehiculos), operador(operador) {}
Caseta::~Caseta(){}

void Caseta::setOperador(Persona* operador){this->operador = operador;}


void Caseta::agregarRegistro(Vehiculo* v)
{
    if (v == nullptr) return;
    registros.emplace_back(v->getPlaca(), v->getTipo(), v->cobrar());
}

int Caseta::calcularRecaudoTotal() const
{
    int total = 0;
    for (const Registro& registro : registros)
        total += registro.getCobro();
    return total;
}

void Caseta::mostrarRegistros() const
{
    cout << "Registros de la caseta:" << endl;
    if (operador != nullptr)
        cout << *operador << endl;
    else
        cout << "Operador: no asignado" << endl;

    if (registros.empty())
    {
        cout << "No hay registros." << endl;
        return;
    }

    for (const Registro& registro : registros)
        cout << "======================================================" << endl
             << registro << endl;
    cout << "==========================================================" << endl;
}
