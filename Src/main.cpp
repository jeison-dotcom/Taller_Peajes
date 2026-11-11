#include <iostream>
#include <string>
#include <vector>

#include "../include/Vehiculo.hpp"
#include "../include/Carro.hpp"
#include "../include/Persona.hpp"
#include "../include/Propietario.hpp"
#include "../include/Excepciones.hpp"
#include "../include/Registro.hpp"
#include "../include/Caseta.hpp"

using namespace std;

int main()
{
    vector<Registro> registros;
    Persona* operador = new Propietario("Carlos", "1060", true);
    Caseta* cerroVerde = new Caseta(registros, operador);
    //Caseta cerroVerde({},nullptr);
    vector<Vehiculo*> vehiculos;

    try {
        cerroVerde->setOperador(operador);

        Persona* p1 = new Propietario("Jeison", "1058", true);
        Persona* p2 = new Propietario("Juan", "1059", false);

        Vehiculo* v1 = new Carro(p1, "ABC123", 3);
        Registro registro(v1->getPlaca(), v1->getTipo(), v1->cobrar());
        cerroVerde->agregarRegistro(registro);

        cerroVerde->mostrarRegistros();




        cout << *v1 << endl;
        cout << *p1 << endl;
        cout << *p2 << endl;

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

    delete cerroVerde;
    
    return 0;
}