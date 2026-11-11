#include "Operador.hpp"

Operador::Operador(string nombre, string id, string codigo): Persona(nombre, id), codigo(codigo) {}
Operador::~Operador() {}

string Operador::getCodigo() const {return codigo;}

string Operador::getDescriccion() const
{
    return "Operador: " + nombre + ", ID: " + id + ", Codigo: " + codigo;
}