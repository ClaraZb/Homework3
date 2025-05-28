#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Archivo.h"
using namespace std;
#pragma once

/*En un principio considere hacer una clase plantilla, es decir que se llame
a generador 3 veces, una para cada tipo de vector que se quiere agregar al json.
Finalmente decidi que era mas claro si solo la funcion agregar dentro de la clase
usaba templates. En esta implementacion, se le pasa a la clase Generador un vector 
con elementos de un cierto tipo. Esta los procesa (usando if constexpr) y transforma
el vector a un string con la notacion especifica de cada tipo. Para eso, detecta que
tipo es T y llama a la funcion adecuada (era mas claro si modularizaba estas funciones).
Despues de haber convertido el vector a un string, llama a la clase Archivo con ese
string, para asociarle una etiqueta, y luego para escribir en el json.

Las funciones que usaban templates las implemente en Generador.h, pero las otras las
implemente en Generador.cpp. */

class Generador{
    public:
        Generador();
        template <typename T>
        static void agregar(const vector<T>& lista);
        
    private:
        template <typename T>
        static string convertir_string(const vector<T>& lista);

        static string string_to_string(const vector<string>& lista);
        static string double_to_string(const vector<double>& lista);
        static string vector_to_string(const vector<vector<int>>& lista);
};

template<typename T>
void Generador::agregar(const vector<T>& lista) {
    string vector_s = convertir_string(lista); //convierte a string y agrega notacion necesaria
    string etiqueta = Archivo::etiquetar(lista); //asocia el vector a su etiqueta
    Archivo::escribir_archivo(etiqueta, vector_s); //una vez que ya se tiene la etiqueta y el vector, se escribe el json
}

template <typename T>
string Generador::convertir_string(const vector<T>& lista){
    if constexpr(is_same_v<T, double>){
        return double_to_string(lista);
    }
    else if constexpr(is_same_v<T, string>){
        return string_to_string(lista);
    }
    else if constexpr(is_same_v<T, vector<int>>){
        return vector_to_string(lista);
    }
    else{ return "Tipo no soportado";}
}
