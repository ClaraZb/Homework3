#include "../headers/Circulo.h"

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