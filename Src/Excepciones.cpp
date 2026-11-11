#include "../include/Excepciones.hpp"

PeajeException::PeajeException(const string& msg) : runtime_error(msg) {}

PlacaInvalidaException::PlacaInvalidaException()
    : PeajeException("Placa invalida: no puede estar vacia.") {}

PlacaInvalidaException::PlacaInvalidaException(const string& placa)
    : PeajeException("Placa invalida: '" + placa + "' (no puede estar vacia).") {}

PasajerosInvalidosException::PasajerosInvalidosException(int valor)
    : PeajeException("Pasajeros invalidos: " + to_string(valor) +
                     " (debe ser al menos 1).") {}

PuestosInvalidosException::PuestosInvalidosException(int valor)
    : PeajeException("Puestos invalidos: " + to_string(valor) +
                     " (debe ser al menos 1).") {}

EjesInvalidosException::EjesInvalidosException(int valor)
    : PeajeException("Ejes invalidos: " + to_string(valor) +
                     " (debe ser al menos 1).") {}