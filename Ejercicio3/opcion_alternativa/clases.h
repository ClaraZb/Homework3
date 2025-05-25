#include <iostream>
#include <vector>
#pragma once
using namespace std;

template<typename T>
class Generador{
    public:
        Generador();
        void agregar(const T& elt);
        vector<T> get_vector() const;
        string get_vector_string() const;
    private:
        vector<T> vec;
        string double_to_string();
        string string_to_string();
        string vec_to_string();
};


template<typename T>
Generador<T>::Generador() {}

//Para el tipo string 
template<>
void Generador<string>::agregar(const string& elt){
    vec.push_back(elt);
}
template<>
vector<string> Generador<string>::get_vector() const{
    return vec;
}

//Para el tipo double
template<>
void Generador<double>::agregar(const double& elt){
    vec.push_back(elt);
}
template<>
vector<double> Generador<double>::get_vector() const{
    return vec;
}

//Para el tipo vector de int
template<>
void Generador<vector<int>>::agregar(const vector<int>& elt){
    vec.push_back(elt);
}
template<>
vector<vector<int>> Generador<vector<int>>::get_vector() const{
    return vec;
}

template <typename T>
string Generador<T>::get_vector_string() const{
    if constexpr(is_same_v<T, double>){
        return double_to_string();
    }
    else if constexpr(is_same_v<T, string>){
        return string_to_string();
    }
    else if constexpr(is_same_v<T, vector<int>>){
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
        imprimir += "\"" + vec[i] + "\"";
        if (i != vec.size() - 1){ //si es el ultimo elt no se agrega una coma
            imprimir += ", ";
        }
    }
    imprimir += "]";
    return imprimir;
}

template <typename T>
string Generador<T>::vec_to_string(){
    string imprimir = "[ \n";
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
    imprimir += "\n]";
    return imprimir;
}