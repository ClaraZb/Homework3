#include <iostream>
#include <vector>
#include <string>
#include "../headers/Archivo.h"
using namespace std;


void Archivo::escribir_archivo(string&etiqueta, string&vector_s){
    ofstream archivo("salida.json", ios::app); 
    if (archivo.is_open()) {
        archivo << etiqueta << ": " << vector_s << endl;
        archivo.close();
    } 
}

void Archivo::visualizar_archivo() {
    ifstream archivo("salida.json");
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
        archivo.close();
    } 
}