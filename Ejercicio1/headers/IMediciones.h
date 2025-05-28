#pragma once
#include <iostream>
using namespace std;

//Interfaz
class IMediciones{
    public:
        virtual void serializar(ofstream& out) const = 0;
        virtual void deserializar(ifstream& in) = 0;
        virtual ~IMediciones(){}; //destructor
};

