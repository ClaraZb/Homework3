#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
#pragma once

class Archivo{
    public:
        template <typename T> 
        static string etiquetar(const vector<T> &vec);
        static void escribir_archivo(string &etiqueta, string &vector_s);
        static void visualizar_archivo();
};

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

