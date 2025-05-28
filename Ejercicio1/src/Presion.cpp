#include "../headers/Presion.h"
#include <iostream>
#include <memory>
using namespace std;

Presion::Presion(float p, float q, float t){
    presionDinamica = q;
    presionEstatica = p;
    tiempoMedicion = make_unique<float>(t);
};

void Presion::imprimir(){
    cout << "Presion dinamica: " << presionDinamica << endl
    << "Presion estatica: " << presionEstatica << presionEstatica << endl
    << "Tiempo medicion: " << to_string(*tiempoMedicion) << endl;
}