#include <iostream>
#include "headers/Generador.h"
#include "headers/Archivo.h"
#include <vector>
#include <string>
using namespace std;


int main() {
    vector<double> vec1 = {1.3, 2.1, 3.2};
    Generador::agregar(vec1);

    vector<string> vec2 = {"Hola", "Mundo"};
    Generador::agregar(vec2);

    vector<vector<int>> vec3 = {{1, 2},{3, 4}};
    Generador::agregar(vec3);

    Archivo::visualizar_archivo();
    return 0;
}