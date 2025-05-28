#include "../headers/Punto.h"

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