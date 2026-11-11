#pragma once

#include <exception>
#include <stdexcept>
#include <string>

using namespace std;

class PeajeException : public runtime_error {
public:
    explicit PeajeException(const string& msg) : runtime_error(msg) {}
};

// R1: la placa nunca puede estar vacía
class PlacaInvalidaException : public PeajeException {
public:
    PlacaInvalidaException()
        : PeajeException("Placa invalida: no puede estar vacia.") {}
    explicit PlacaInvalidaException(const string& placa)
        : PeajeException("Placa invalida: '" + placa + "' (no puede estar vacia).") {}
};

// R2: el carro lleva al menos un pasajero
class PasajerosInvalidosException : public PeajeException {
public:
    explicit PasajerosInvalidosException(int valor)
        : PeajeException("Pasajeros invalidos: " + to_string(valor) +
                         " (debe ser al menos 1).") {}
};