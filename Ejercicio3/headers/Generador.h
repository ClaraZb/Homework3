#include <iostream>
#include <vector>
#include <string>
#include <fstream>
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
        static void agregar(const T& elt);
        template <typename T>
        static string convertir_string(const vector<T>& lista);

        static vector<string> get_vec_string();
        static vector<double> get_vec_double();
        static vector<vector<int>> get_vec_vec_int();
        
    private:
        static vector<double> vec_double;
        static vector<string> vec_string;
        static vector<vector<int>> vec_vec_int;

        static string string_to_string(const vector<string>& lista);
        static string double_to_string(const vector<double>& lista);
        static string vector_to_string(const vector<vector<int>>& lista);
};

template <typename T>
void Generador::agregar(const T& elt){
    if constexpr(is_same_v<T, double>){
        vec_double.push_back(elt);
    }
    else if constexpr(is_same_v<T, string>){
        vec_string.push_back(elt);
    }
    else if constexpr(is_same_v<T, vector<int>>){
        vec_vec_int.push_back(elt);
    }
    else return;
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
