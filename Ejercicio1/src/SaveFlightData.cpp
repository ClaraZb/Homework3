#include "../headers/Posicion.h"
#include "../headers/Presion.h"
#include "../headers/SaveFlightData.h"

#include <iostream>
#include <memory>
using namespace std;

SaveFlightData::SaveFlightData(const Posicion& p, const Presion& q): posicion(p), presion(q){}

void SaveFlightData::serializar(ofstream& out) const{
    posicion.serializar(out);
    presion.serializar(out);
}

void SaveFlightData::deserializar(ifstream& in){
    posicion.deserializar(in);
    presion.deserializar(in);
}

void SaveFlightData::imprimir(){
    cout << "Posicion vuelo: " << endl;
    posicion.imprimir();
    cout << endl << "Presion vuelo: " << endl;
    presion.imprimir();
}