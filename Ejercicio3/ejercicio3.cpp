#include <iostream>
#include "headers/Generador.h"
#include "headers/Archivo.h"
#include <vector>
#include <string>
using namespace std;

/*Este ejercicio me costo mucho abordarlo, porque habian demasiadas maneras para hacerlo.
Explico mas en detalle mis decisiones en Archivo.h y Generador.h. 
Agrego uno a uno los elementos al generador, y luego llamo a la funcion de Archivo
para escribir el archivo json y despues visualizarlo por pantalla. */

int main() {
    Generador::agregar(1.3);
    Generador::agregar(string("Hola"));
    Generador::agregar(2.1);
    Generador::agregar(vector<int>{3,4});
    Generador::agregar(3.2);
    Generador::agregar(string("Mundo"));
    Generador::agregar(vector<int>{1,2});

    Archivo::escribir_archivo();
    Archivo::visualizar_archivo();
    return 0;
}