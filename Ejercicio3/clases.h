#include <iostream>
#include <vector>
#pragma once
using namespace std;

template<typename T>
class Generador{
    public:
        Generador();
        void agregar(T& elt);
        vector<T> get_vector();
        string procesar();
    private:
        vector<T> vec;
        string double_to_string();
        string string_to_string();
        string vec_to_string();
};