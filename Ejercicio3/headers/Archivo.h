#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Generador.h"
using namespace std;
#pragma once

/*Esta funcion me permite escribir el json. O bien visualizarlo. 
Para escribir el json, llamo 3 veces a la funcion escribir_vector (una por cada vector
de la clase Generador), convierto el vector a string con el metodo de la clase Generador,
le asocio su etiqueta, y dejo el string listo para que pueda ser agregado al archivo. 
Decidi hacerla static para no tener que instanciarla. */

class Archivo{
    public:
        static void escribir_archivo();
        static void visualizar_archivo();
    private:
        template <typename T>
        static string escribir_vector(vector<T> vec);
        template <typename T> 
        static string etiquetar(const vector<T> &vec);
};

template <typename T>
string Archivo::escribir_vector(vector<T> vec){
    string datos = Generador::convertir_string(vec);
    string etiqueta = etiquetar(vec);
    return etiqueta + ": " + datos;
}

template<typename T>
string Archivo::etiquetar(const vector<T> &vec){
    if constexpr(is_same_v<T, double>){
        return "\"vec_doubles\"";
    }
    else if constexpr(is_same_v<T, string>){
        return "\"palabras\"";
    }
    else if constexpr(is_same_v<T, vector<int>>){
        return "\"listas\"";
    }
    else{ return "Tipo no soportado";}
} 

