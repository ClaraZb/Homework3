#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Archivo.h"
using namespace std;
#pragma once

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
    string vector_s = convertir_string(lista);
    string etiqueta = Archivo::etiquetar(lista);
    Archivo::escribir_archivo(etiqueta, vector_s);
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
