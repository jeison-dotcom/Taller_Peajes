#include "../include/Peaje.hpp"

Peaje::Peaje(){}
Peaje::~Peaje() {for (Vehiculo* v : vehiculos) delete v;for (Persona*  p : personas)  delete p;}

void Peaje::registrarPropietario(const string& nombre, const string& id, const string& ciudad) {
    personas.push_back(new Propietario(nombre, id, ciudad));
}

void Peaje::registrarCarro(const string& placa, int pasajeros, size_t idxPropietario) {
    if (placa.empty()) throw std::invalid_argument("Placa vacia");
    Persona* dueno = nullptr;
    if (idxPropietario < personas.size()) dueno = personas[idxPropietario];
    vehiculos.push_back(new Carro(dueno, placa, pasajeros));
}

int Peaje::getRecaudado() const {
    int total = 0;
    for (Vehiculo* v : vehiculos) total += v->cobrar();
    return total;
}