#include <iostream>
#include "headers/Punto.h"
#include "headers/Circulo.h"
#include "headers/Elipse.h"
#include "headers/Rectangulo.h"
#include "headers/ProcesadorFigura.h"
using namespace std;

/*Para cada figura, declaro la clase con sus atributos, getters y setters. 
Especializo la clase procesarFigura usando templates para que calcule el area segun el tipo
de dato (figura) que se le pasa.
*/

int main(){
    //Tests para el punto
    Punto punto(3.2, 4.7);

    cout << "Punto: " << endl;
    cout << "Posicion x: " << punto.get_posx() << endl;
    cout << "Posicion y: " << punto.get_posy() << endl;

    cout << "Seteo nuevas posiciones x e y... " << endl;
    punto.set_posx(7.7);
    punto.set_posy(3.2);

    cout << "Nueva posicion x: " << punto.get_posx() << endl;
    cout << "Nueva posicion y: " << punto.get_posy() << endl;
    cout << "Area del punto: " << procesadorFigura<Punto>::calcularArea(punto) << endl;


    //Tests para el circulo
    Circulo circ(3.2, 4.7, 3);

    cout << "\nCirculo: " << endl;
    cout << "Posicion x: " << circ.get_posx() << endl;
    cout << "Posicion y: " << circ.get_posy() << endl;
    cout << "Radio: " << circ.get_radio() << endl;

    cout << "Seteo nuevas posiciones y radio..." << endl;
    circ.set_posx(1.1);
    circ.set_posy(2.2);
    circ.set_radio(5.5);

    cout << "Nueva posicion x: " << circ.get_posx() << endl;
    cout << "Nueva posicion y: " << circ.get_posy() << endl;
    cout << "Nuevo radio: " << circ.get_radio() << endl;
    cout << "Area del circulo: " << procesadorFigura<Circulo>::calcularArea(circ) << endl;


    //Tests para la elipse
    Elipse elip(3.2, 4.7, 3, 2);

    cout << "\nElipse: " << endl;
    cout << "Posicion x: " << elip.get_posx() << endl;
    cout << "Posicion y: " << elip.get_posy() << endl;
    cout << "Semieje mayor: " << elip.get_semieje_mayor() << endl;
    cout << "Semieje menor: " << elip.get_semieje_menor() << endl;

    cout << "Seteo nuevas posiciones y semiejes..." << endl;
    elip.set_posx(9.9);
    elip.set_posy(8.8);
    elip.set_semieje_mayor(7.7);
    elip.set_semieje_menor(6.6);

    cout << "Nueva posicion x: " << elip.get_posx() << endl;
    cout << "Nueva posicion y: " << elip.get_posy() << endl;
    cout << "Nuevo semieje mayor: " << elip.get_semieje_mayor() << endl;
    cout << "Nuevo semieje menor: " << elip.get_semieje_menor() << endl;
    cout << "Area de la elipse: " << procesadorFigura<Elipse>::calcularArea(elip) << endl;


    //Tests para el rectangulo
    Rectangulo rect(3.2, 4.7, 4, 5);

    cout << "\nRectangulo: " << endl;
    cout << "Posicion x vertice: " << rect.get_posx_vertice() << endl;
    cout << "Posicion y vertice: " << rect.get_posy_vertice() << endl;
    cout << "Ancho: " << rect.get_ancho() << endl;
    cout << "Largo: " << rect.get_largo() << endl;

    cout << "Seteo nuevas posiciones y dimensiones..." << endl;
    rect.set_posx_vertice(10.1);
    rect.set_posy_vertice(11.2);
    rect.set_ancho(12.3);
    rect.set_largo(13.4);

    cout << "Nueva posicion x vertice: " << rect.get_posx_vertice() << endl;
    cout << "Nueva posicion y vertice: " << rect.get_posy_vertice() << endl;
    cout << "Nuevo ancho: " << rect.get_ancho() << endl;
    cout << "Nuevo largo: " << rect.get_largo() << endl;
    cout << "Area del rectangulo: " << procesadorFigura<Rectangulo>::calcularArea(rect) << endl;

    return 0;
}

