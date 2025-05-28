#include "headers/IMediciones.h"
#include "headers/MedicionBase.h"
#include "headers/Posicion.h"
#include "headers/Presion.h"
#include "headers/SaveFlightData.h"

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    cout << "Imprimiendo posicion: " << endl;
    posicion.imprimir();

    Presion presion(101.3f, 5.8f, 6.1f);
    cout << endl << "Imprimiendo presion: " << endl;
    presion.imprimir();

    SaveFlightData vuelo(posicion, presion);
    cout << endl << "Imprimiendo datos vuelo: " << endl;
    vuelo.imprimir();

    //serializar
    ofstream out("vuelo.dat", ios::binary);
    if (out.is_open()) {
        vuelo.serializar(out);
        out.close();
    }

    //deserializar
    Posicion posicion2(0,0,0,0);
    Presion presion2(0,0,0);
    SaveFlightData vuelo2(posicion2, presion2);
    cout << endl << "Imprimiendo datos vuelo 2: " << endl;
    vuelo2.imprimir();

    cout << endl << "Deserializamos " << endl;
    ifstream in("vuelo.dat", ios::binary);
    if (in.is_open()){
        vuelo2.deserializar(in);
        in.close();
    }
    
    cout << endl << "Imprimiendo datos vuelo 2: " << endl;
    vuelo2.imprimir();

    return 0;
}

