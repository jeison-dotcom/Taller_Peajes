#include <iostream>
#include <string>
#include <vector>

#include "../include/Vehiculo.hpp"
#include "../include/Carro.hpp"
#include "../include/Moto.hpp"
#include "../include/Camion.hpp"
#include "../include/Bus.hpp"
#include "../include/Persona.hpp"
#include "../include/Propietario.hpp"
#include "../include/Excepciones.hpp"
#include "../include/Registro.hpp"
#include "../include/Caseta.hpp"
#include "../include/Operador.hpp"

using namespace std;

int main()
{
    vector<Registro> registros;
    vector<Vehiculo*> vehiculos;
    vector<Persona*> personas;

    personas.push_back(new Operador("marian Paz", "1060", "OP001"));
    Persona* operador = personas.back();
    Caseta* cerroVerde = new Caseta(registros, operador);


    personas.push_back(new Propietario("Jeison Macias", "1057", false));
    Persona* forastero = personas.back();
    personas.push_back(new Propietario("Santiago Ijaji", "1058", true));
    Persona* vecino = personas.back();


    try {
        cerroVerde->setOperador(operador);

        //CASOS DE PRUEBA

        cout << "CASOS DE PRUEBA" << endl;

        cout << "1.Carro ABC123, 3 pasajeros, propietariono vecino. ¿Cuánto paga?" << endl;
        
        vehiculos.push_back(new Carro(forastero, "ABC123", 3));
        Vehiculo* v1 = vehiculos.back();
        cout << "Pago: " << v1->cobrar() << endl;
        cout << "---------------------------------------------------------" << endl;


        cout << "1. Carro ABC123, 3 pasajeros, propietario NO vecino. ¿Cuanto paga?" << endl;
        vehiculos.push_back(new Carro(forastero, "ABC123", 3));
        cout << "Pago: " << vehiculos.back()->cobrar() << endl;
        cout << "---------------------------------------------------------" << endl;

        cout << "2 El mismo carro, ahora con un propietariovecino. ¿Cuánto paga?" << endl;
        
        v1->setPropietario(vecino);
        cout << "Pago: " << v1->cobrar() << endl;
        cout << "---------------------------------------------------------" << endl;

        cout << "3 Moto XYZ45A de 125 cc, propietario vecino. ¿Cuánto paga? " << endl;
        vehiculos.push_back(new Moto(vecino, "XYZ45A", 125));
        Vehiculo* v2 = vehiculos.back();
        cout << "Pago: " << v2->cobrar() << endl;
        cout << "---------------------------------------------------------" << endl;

        cout << "4 Moto MOT650 de 650 cc, sin propietario.¿Cuánto paga? ¿Es de alto cilindraje?" << endl;
        vehiculos.push_back(new Moto(nullptr, "MOT650", 650));
        Vehiculo* v3 = vehiculos.back();
        cout << "Pago: " << v3->cobrar() << endl;
        cout << "---------------------------------------------------------" << endl;

        cout << "5 Bus BUS777 de 38 puestos, propietario vecino. ¿Cuánto paga?" << endl;
        vehiculos.push_back(new Bus(vecino, "BUS777", 38));
        Vehiculo* v4 = vehiculos.back();
        cout << "Pago: " << v4->cobrar() << endl;
        cout << "---------------------------------------------------------" << endl;

        cout << "6 Camión CAM301 de 3 ejes, sin propietario. ¿Cuánto paga?" << endl;
        Camion* v5 = new Camion(nullptr, "CAM301", 3); // Cambie Vehiculo* a Camion* para poder llamar a agregarEje(), no entre otra solucion
        vehiculos.push_back(v5);
        cout << "Pago: " << v5->cobrar() << endl;
        cout << "---------------------------------------------------------" << endl;

        cout << "7 El mismo camión después de agregarle un eje. ¿Cuánto paga?" << endl;
        v5->agregarEje();
        cout << "Pago: " << v5->cobrar() << endl;
        cout << "---------------------------------------------------------" << endl;


        cout << "10 Pasan por la caseta los vehículos de los casos 2, 3, 5 y 7. ¿Cuál es el recaudo total y cuántos hay de cada categoría?" << endl;
        cerroVerde->agregarRegistro(v1);
        cerroVerde->agregarRegistro(v2);
        cerroVerde->agregarRegistro(v4);
        //cerroVerde->agregarRegistro(v5);
        //cerroVerde->agregarRegistro(v7);
        cerroVerde->mostrarRegistros();
        
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

    cout << "8. Crear un carro con la placa vacia. ¿Que excepcion se lanza?" << endl;
    try {
        Vehiculo* v6 = new Carro(forastero, "", 2);
        vehiculos.push_back(v6);
        cout << "Pago: " << v6->cobrar() << endl;
    }
    catch (const PlacaInvalidaException& e) {
        cout << "Error de placa: " << e.what() << endl;
    }
    cout << "---------------------------------------------------------" << endl;

    cout << "9. Crear un camion de 1 eje. ¿Que excepcion se lanza?" << endl;
    try {
        Camion* v7 = new Camion(forastero, "CAM001", 1);
        vehiculos.push_back(v7);
        cout << "Pago: " << v7->cobrar() << endl;
    }
    catch (const EjesInvalidosException& e) {
        cout << "Error de ejes: " << e.what() << endl;
    }
    
    delete cerroVerde;

    for (Vehiculo* v : vehiculos) delete v;
    vehiculos.clear();

    for (Persona* p : personas) delete p;
    personas.clear();

    

    cout << "---------------------------------------------------------" << endl;
    cout << "Otras Pruebas" << endl;

    Persona* p1 = new Propietario("Jeison", "1058", true);
    Persona* p2 = new Propietario("Juan", "1059", false);
    Persona* p3 = new Operador("Maria", "1060", "ZA63");

    Caseta* caseta = new Caseta({}, p3);

        Vehiculo* v1 = new Carro(p1, "ABC123", 3);
        caseta->agregarRegistro(v1);
        caseta->mostrarRegistros();

        cout << "///////////////////////////////////////" << endl;
        cout << *p2 << endl;
        cout << *v1 << endl;
 
        v1->setPropietario(p2);

        cout << "///////////////////////////////////////" << endl;
        cout << *v1 << endl;

        cout << "Tarifa: " << v1->cobrar() << endl;
        delete v1;
        delete p1;
        delete p2;
        delete caseta;
        
    
    return 0;
}
