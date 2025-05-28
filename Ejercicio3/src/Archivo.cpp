#include <iostream>
#include <vector>
#include <string>
#include "../headers/Archivo.h"
#include "../headers/Generador.h"
using namespace std;

void Archivo::escribir_archivo(){
    vector<double> vec_d = Generador::get_vec_double();
    vector<string> vec_s = Generador::get_vec_string();
    vector<vector<int>> vec_i = Generador::get_vec_vec_int();

    ofstream archivo("salida.json", ios::app);
    archivo << "{ "
    << escribir_vector(vec_d) << ", " << endl
    << "  " << escribir_vector(vec_s) << ", " << endl
    << "  " << escribir_vector(vec_i) << endl 
    << "}";
    archivo.close();
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