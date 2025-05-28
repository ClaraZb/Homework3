#include "../headers/Posicion.h"
#include <iostream>
#include <memory>
using namespace std;

Posicion::Posicion(float lat, float lon, float alt, float t){
    latitud = lat;
    longitud = lon;
    altitud = alt;
    tiempoMedicion = make_unique<float>(t);
}

void Posicion::imprimir(){
    cout << "Latitud: " << latitud << endl 
    << "Longitud: " << longitud << endl
    << "Altitud: " << altitud << endl
    << "Tiempo medicion: " << to_string(*tiempoMedicion) << endl;
}