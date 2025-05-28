#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
#pragma once

/*En un principio considere hacer una clase plantilla, es decir que se llame
a generador 3 veces, una para cada tipo de vector que se quiere agregar al json.
Finalmente decidi que era mas claro si solo las funciones agregar y convertir_string
dentro de la clase usaban templates. 

En esta implementacion, se le pasa a la clase Generador elementos 
de un cierto tipo. Esta los procesa (usando if constexpr) y los agrega a su vector
correspondiente (hay uno para cada tipo), detectando que tipo es T. 

Esta clase es llamada por la clase Archivo, por lo que implemento los getters de los vectores.
Decido hacerla static para no tener que instanciarla. Implemento tambien metodos para convertir
el vector a string, asociandole la notacion adecuada a su tipo. 

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
