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
        imprimir += "[";
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