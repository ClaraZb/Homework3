#include "../headers/Rectangulo.h"

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
