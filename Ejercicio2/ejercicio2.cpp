#include <iostream>
#include "clases.h"
using namespace std;

int main(){
    Punto punto(3.2, 4.7);
    cout << "Area del punto: " << procesadorFigura<Punto>::calcularArea(punto) << endl;

    Circulo circ(3.2, 4.7, 3);
    cout << "Area del circulo: " << procesadorFigura<Circulo>::calcularArea(circ) << endl;
    
    Elipse elip(3.2, 4.7, 3, 2);
    cout << "Area de la elipse: " << procesadorFigura<Elipse>::calcularArea(elip) << endl;

    Rectangulo rect(3.2, 4.7, 4, 5);
    cout << "Area del rectangulo: " << procesadorFigura<Rectangulo>::calcularArea(rect) << endl;
    
    return 0;
}

