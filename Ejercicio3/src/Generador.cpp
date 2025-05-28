#include <iostream>
#include <vector>
#include <string>
#include "../headers/Generador.h"
using namespace std;

string Generador::string_to_string(const vector<string>& lista){
    string imprimir = "[";
    for(int i = 0; i < lista.size(); i ++){
        imprimir += "\"" + lista[i] + "\"";
        if (i != lista.size() - 1){ //si es el ultimo elt no se agrega una coma
            imprimir += ", ";
        }
    }
    imprimir += "]";
    return imprimir;
}

string Generador::double_to_string(const vector<double>& lista){
    string imprimir = "[";
    for(int i = 0; i < lista.size(); i ++){
        imprimir += to_string(lista[i]);
        if (i != lista.size() - 1){ //si es el ultimo elt no se agrega una coma
            imprimir += ", ";
        }
    }
    imprimir += "]";
    return imprimir;
}

string Generador::vector_to_string(const vector<vector<int>>& lista){
    string imprimir = "[ \n";
    for(int i = 0; i < lista.size(); i ++){
        imprimir += "\t[";
        for (int j = 0; j < lista[i].size(); j ++){
            imprimir += to_string(lista[i][j]);
            if (j != lista[i].size() - 1){ //si es el ultimo elt no se agrega una coma
                imprimir += ", ";
            }
        }
        imprimir += "]";
        if (i != lista.size() - 1){ //si es el ultimo elt no se agrega una coma
            imprimir += ", \n";
        }      
    }
    imprimir += "\n]";
    return imprimir;
}

vector<double> Generador::get_vec_double(){
    return vec_double;
}
vector<string> Generador::get_vec_string(){
    return vec_string;
}
vector<vector<int>> Generador::get_vec_vec_int(){
    return vec_vec_int;
}

//tengo que hacer esto porq declare todo como static
vector<double> Generador::vec_double;
vector<string> Generador::vec_string;
vector<vector<int>> Generador::vec_vec_int;