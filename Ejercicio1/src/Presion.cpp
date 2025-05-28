#include "../headers/Presion.h"
#include <iostream>
#include <memory>
#include <fstream>
using namespace std;

//Constructor
Presion::Presion(float p, float q, float t): MedicionBase(t){
    presionEstatica = p;
    presionDinamica = q;
};

//Constructor para la copia
Presion::Presion(const Presion& otro): MedicionBase(otro){
    presionEstatica = otro.presionEstatica;
    presionDinamica = otro.presionDinamica;
}

void Presion::imprimir(){
    cout << "Presion estatica: " << presionEstatica << endl
    << "Presion dinamica: " << presionDinamica << endl
    << "Tiempo medicion: " << to_string(*tiempoMedicion) << endl;
}

void Presion::serializar(ofstream& out) const {
    MedicionBase::serializar(out);
    out.write(reinterpret_cast<const char*>(&presionEstatica), sizeof(presionEstatica));
    out.write(reinterpret_cast<const char*>(&presionDinamica), sizeof(presionDinamica));
} 

void Presion::deserializar(ifstream& in) {
    MedicionBase::deserializar(in);
    in.read(reinterpret_cast<char*>(&presionEstatica), sizeof(presionEstatica));
    in.read(reinterpret_cast<char*>(&presionDinamica), sizeof(presionDinamica));
}