#include "../headers/MedicionBase.h"
#include <memory>
#include <iostream>
#include <fstream>
using namespace std;

MedicionBase::MedicionBase(float t){
    tiempoMedicion = make_unique<float>(t);
}

//constructor para la copia
MedicionBase::MedicionBase(const MedicionBase& otro) {
    tiempoMedicion = make_unique<float>(*otro.tiempoMedicion);
}

float MedicionBase::getTiempo(){
    return *tiempoMedicion;
};

void MedicionBase::serializar(ofstream& out) const {
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()), sizeof(float));
} 

void MedicionBase::deserializar(ifstream& in) {
    in.read(reinterpret_cast<char*>(tiempoMedicion.get()), sizeof(float));
}

