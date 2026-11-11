#pragma once

#include <exception>
#include <stdexcept>
#include <string>

using namespace std;

class PeajeException : public runtime_error {
public:
    explicit PeajeException(const string& msg);
};

//la placa nunca puede estar vacía
class PlacaInvalidaException : public PeajeException {
public:
    PlacaInvalidaException();
    explicit PlacaInvalidaException(const string& placa);
};

//el carro lleva al menos un pasajero
class PasajerosInvalidosException : public PeajeException {
public:
    explicit PasajerosInvalidosException(int valor);
};

// el bus debe tener al menos un puesto
class PuestosInvalidosException : public PeajeException {
public:
    explicit PuestosInvalidosException(int valor);
};

//Camion debe tener al menos dos eje
class EjesInvalidosException : public PeajeException {
public:
    explicit EjesInvalidosException(int valor);
};