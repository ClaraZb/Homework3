#include "../headers/Posicion.h"
#include <iostream>
#include <memory>
#include <fstream>
using namespace std;

Posicion::Posicion(float lat, float lon, float alt, float t): MedicionBase(t){
    latitud = lat;
    longitud = lon;
    altitud = alt;
}

Posicion::Posicion(const Posicion& otro): MedicionBase(otro){
    latitud = otro.latitud;
    longitud = otro.longitud;
    altitud = otro.altitud;
}

void Posicion::imprimir(){
    cout << "Latitud: " << latitud << endl 
    << "Longitud: " << longitud << endl
    << "Altitud: " << altitud << endl
    << "Tiempo medicion: " << to_string(*tiempoMedicion) << endl;
}

//incluir medicionbase?
void Posicion::serializar(ofstream& out) const {
    MedicionBase::serializar(out);
    out.write(reinterpret_cast<const char*>(&latitud), sizeof(latitud));
    out.write(reinterpret_cast<const char*>(&longitud), sizeof(longitud));
    out.write(reinterpret_cast<const char*>(&altitud), sizeof(altitud));
} 

void Posicion::deserializar(ifstream& in) {
    MedicionBase::deserializar(in);
    in.read(reinterpret_cast<char*>(&latitud), sizeof(latitud));
    in.read(reinterpret_cast<char*>(&longitud), sizeof(longitud));
    in.read(reinterpret_cast<char*>(&altitud), sizeof(altitud));
}