#include <iostream>
#include <string>
#include <vector>

#include "../include/Vehiculo.hpp"
#include "../include/Carro.hpp"
#include "../include/Persona.hpp"
#include "../include/Propietario.hpp"

using namespace std;

int main()
{
    try {
        Persona* p1 = new Propietario("Jeison", "1058", true);
        Vehiculo* v1 = new Carro(p1, "AAA123", 2);
        cout << *v1 << endl;
        cout << "Tarifa: " << v1->cobrar() << endl;
        delete v1;
        delete p1;
    }
    catch (const PlacaInvalidaException& e) {
        cout << "Error de placa: " << e.what() << endl;
    }
    catch (const PasajerosInvalidosException& e) {
        cout << "Error de pasajeros: " << e.what() << endl;
    }
    catch (const PeajeException& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "Error inesperado: " << e.what() << endl;
    }
    
    return 0;
}