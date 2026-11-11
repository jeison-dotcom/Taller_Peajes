#pragma once

#include <exception>
#include <stdexcept>
#include <string>

using namespace std;

class PeajeException : public runtime_error {
public:
    explicit PeajeException(const string& msg) : runtime_error(msg) {}
};

//la placa nunca puede estar vacía
class PlacaInvalidaException : public PeajeException {
public:
    PlacaInvalidaException()
        : PeajeException("Placa invalida: no puede estar vacia.") {}
    explicit PlacaInvalidaException(const string& placa)
        : PeajeException("Placa invalida: '" + placa + "' (no puede estar vacia).") {}
};

//el carro lleva al menos un pasajero
class PasajerosInvalidosException : public PeajeException {
public:
    explicit PasajerosInvalidosException(int valor)
        : PeajeException("Pasajeros invalidos: " + to_string(valor) +
                         " (debe ser al menos 1).") {}
};

// el bus debe tener al menos un puesto
class PuestosInvalidosException : public PeajeException {
public:
    explicit PuestosInvalidosException(int valor)
        : PeajeException("Puestos invalidos: " + to_string(valor) +
                         " (debe ser al menos 1).") {}
};

//Camion debe tener al menos un eje
class EjesInvalidosException : public PeajeException {
public:
    explicit EjesInvalidosException(int valor)
        : PeajeException("Ejes invalidos: " + to_string(valor) +
                         " (debe ser al menos 1).") {}  
};