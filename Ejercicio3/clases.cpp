#include "clases.h"
#include <iostream>
#include <type_traits>
using namespace std;

//Para el tipo string 
template<>
void Generador<string>::agregar(string& elt){
    vec.push_back(elt);
}
vector<string> Generador<string>::get_vector(){
    return vec;
}

//Para el tipo double
template<>
void Generador<double>::agregar(double& elt){
    vec.push_back(elt);
}
vector<double> Generador<double>::get_vector(){
    return vec;
}

//Para el tipo vector de int
template<>
void Generador<vector<int>>::agregar(vector<int>& elt){
    vec.push_back(elt);
}
vector<vector<int>> Generador<vector<int>>::get_vector(){
    return vec;
}

template <typename T>
string Generador<T>::procesar(){
    if constexpr(is_double<T>){
        return double_to_string();
    }
    else if constexpr(is_string<T>){
        return string_to_string();
    }
    else if constexpr(is_same<T, vector<int>){
        return vec_to_string();
    }
}

template <typename T>
string Generador<T>::double_to_string(){
    string imprimir = "[";
    for(int i = 0; i < vec.size(); i ++){
        imprimir += to_string(vec[i]);
        if (i != vec.size() - 1){ //si es el ultimo elt no se agrega una coma
            imprimir += ", ";
        }
    }
    imprimir += "]";
    return imprimir;
}

template <typename T>
string Generador<T>::string_to_string(){
    string imprimir = "[";
    for(int i = 0; i < vec.size(); i ++){
        imprimir = "\"" + vec[i] + "\"";
        if (i != vec.size() - 1){ //si es el ultimo elt no se agrega una coma
            imprimir += ", ";
        }
    }
    imprimir += "]";
    return imprimir;
}

template <typename T>
string Generador<T>::vec_to_string(){
    string imprimir = "[\n";
    for(int i = 0; i < vec.size(); i ++){
        imprimir += "[";
        for (int j = 0; j < vec[i].size(); j ++){
            imprimir += to_string(vec[i][j]);
            if (j != vec[i].size() - 1){ //si es el ultimo elt no se agrega una coma
                imprimir += ", ";
            }
        }
        imprimir += "]";
        if (i != vec.size() - 1){ //si es el ultimo elt no se agrega una coma
            imprimir += ", \n";
        }      
    }
    imprimir += "]";
    return imprimir;
}