#include "../headers/Elipse.h"

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