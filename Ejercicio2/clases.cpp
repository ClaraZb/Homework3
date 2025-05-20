#include <iostream>
#include "clases.h"
using namespace std;
#define pi 3.14159265359

Punto::Punto(float x, float y) {
    posx = x;
    posy = y;
}
void Punto::set_posx(float x){
    posx = x;
}
void Punto::set_posy(float y){
    posy = y;
}
float Punto::get_posx(){
    return posx;
}
float Punto::get_posy(){
    return posy;
}


Circulo::Circulo(float x, float y, float r) {
    posx = x;
    posy = y;
    radio = r;
}
void Circulo::set_posx(float x){
    posx = x;
}
void Circulo::set_posy(float y){
    posy = y;
}
void Circulo::set_radio(float r){
    radio = r;
}
float Circulo::get_posx(){
    return posx;
}
float Circulo::get_posy(){
    return posy;
}
float Circulo::get_radio(){
    return radio;
}


Elipse::Elipse(float x, float y, float semi_mayor, float semi_menor){
    posx = x;
    posy = y;
    a = semi_mayor;
    b = semi_menor;
}
void Elipse::set_posx(float x){
    posx = x;
}
void Elipse::set_posy(float y){
    posx = y;
}
void Elipse::set_semieje_mayor(float semi_mayor){
    a = semi_mayor;
}
void Elipse::set_semieje_menor(float semi_menor){
    b = semi_menor;
}
float Elipse::get_posx(){
    return posx;
}
float Elipse::get_posy(){
    return posy;
}
float Elipse::get_semieje_mayor(){
    return a;
}
float Elipse::get_semieje_menor(){
    return b;
}


Rectangulo::Rectangulo(float xv, float yv, float a, float l){
    posxv = xv;
    posyv = yv;
    ancho = a;
    largo = l;
}
void Rectangulo::set_posx_vertice(float xv){
    posxv = xv;
}
void Rectangulo::set_posy_vertice(float yv){
    posxv = yv;
}
void Rectangulo::set_ancho(float a){
    ancho = a;
}
void Rectangulo::set_largo(float l){
    largo = l;
}
float Rectangulo::get_posx_vertice(){
    return posxv;
}
float Rectangulo::get_posy_vertice(){
    return posyv;
}
float Rectangulo::get_ancho(){
    return ancho;
}
float Rectangulo::get_largo(){
    return largo;
}


template<>
float procesadorFigura<Punto>::calcularArea(Punto &p){
    return 0;
};
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


//agregar los const eventualmente