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

    Persona* operador = new Operador("marian Paz", "1060", "OP001");
    Caseta* cerroVerde = new Caseta(registros, operador);

    vector<Vehiculo*> vehiculos;

    Persona* forastero = new Propietario("Jeison Macias", "1057", false);
    Persona* vecino = new Propietario("Santiago Ijaji", "1058", true);


    try {
        cerroVerde->setOperador(operador);

  
        //CASOS===================================================

        cout << "CASOS DE PRUEBA" << endl;

        cout << "1.Carro ABC123, 3 pasajeros, propietariono vecino. ¿Cuánto paga?" << endl;
        
        Vehiculo* v1 = new Carro(forastero, "ABC123", 3);
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
        Vehiculo* v2 = new Moto(vecino, "XYZ45A", 125);
        cout << "Pago: " << v2->cobrar() << endl;
        cout << "---------------------------------------------------------" << endl;

        cout << "4 Moto MOT650 de 650 cc, sin propietario.¿Cuánto paga? ¿Es de alto cilindraje?" << endl;
        Vehiculo* v3 = new Moto(nullptr, "MOT650", 650);
        cout << "Pago: " << v3->cobrar() << endl;
        cout << "---------------------------------------------------------" << endl;

        cout << "5 Bus BUS777 de 38 puestos, propietario vecino. ¿Cuánto paga?" << endl;
        Vehiculo* v4 = new Bus(vecino, "BUS777", 38);
        cout << "Pago: " << v4->cobrar() << endl;
        cout << "---------------------------------------------------------" << endl;

        cout << "6 Camión CAM301 de 3 ejes, sin propietario. ¿Cuánto paga?" << endl;
        Camion* v5 = new Camion(nullptr, "CAM301", 3); // Cambie Vehiculo* a Camion* para poder llamar a agregarEje(), no entre otra solucion
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
        
        delete v1; delete v2; delete v3; delete v4; delete v5;// delete v6; delete v7;
        
        

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
        cout << "Pago: " << v6->cobrar() << endl;
        delete v6;
    }
    catch (const PlacaInvalidaException& e) {
        cout << "Error de placa: " << e.what() << endl;
    }
    cout << "---------------------------------------------------------" << endl;

    cout << "9. Crear un camion de 1 eje. ¿Que excepcion se lanza?" << endl;
    try {
        Camion* v7 = new Camion(forastero, "CAM001", 1);
        cout << "Pago: " << v7->cobrar() << endl;
        delete v7;
    }
    catch (const EjesInvalidosException& e) {
        cout << "Error de ejes: " << e.what() << endl;
    }
    
        for (Vehiculo* v : vehiculos) delete v;
    vehiculos.clear();

    delete forastero;
    delete vecino;
    delete cerroVerde;
    delete operador;
    
    return 0;
}


      /*

        Persona* p1 = new Propietario("Jeison", "1058", true);
        Persona* p2 = new Propietario("Juan", "1059", false);

        Vehiculo* v1 = new Carro(p1, "ABC123", 3);
        vehiculos.push_back(v1);
        cerroVerde->agregarRegistro(v1);
        cerroVerde->mostrarRegistros();

        cout << "///////////////////////////////////////" << endl;
        cout << *p2 << endl;
        cout << *v1 << endl;
 
        v1->setPropietario(p2);

        cout << "///////////////////////////////////////" << endl;
        cout << *v1 << endl;

        cout << "Tarifa: " << v1->cobrar() << endl;
        delete v1;
        delete p1;
        */
