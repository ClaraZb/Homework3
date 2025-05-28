#include "../headers/ProcesadorFigura.h"
#include "../headers/Punto.h"
#include "../headers/Circulo.h"
#include "../headers/Elipse.h"
#include "../headers/Rectangulo.h"

#include <iostream>
using namespace std;
#define pi 3.14159265359

/*Especializo el calculo de area segun la figura que le pasan a procesadorFigura*/

template<>
float procesadorFigura<Punto>::calcularArea(Punto &p){
    return 0;
}; //el punto no tiene area

template<>
float procesadorFigura<Circulo>::calcularArea(Circulo &circ){
    return pi * circ.get_radio() * circ.get_radio();
};

template<>
float procesadorFigura<Elipse>::calcularArea(Elipse &elip){
    return pi * elip.get_semieje_mayor() * elip.get_semieje_menor();
};

template<>
float procesadorFigura<Rectangulo>::calcularArea(Rectangulo &rect){
    return rect.get_ancho() * rect.get_largo();
};
