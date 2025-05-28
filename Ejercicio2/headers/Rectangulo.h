#pragma once

class Rectangulo{
    private:
        float posxv; //posicion x del vertice izquierdo inferior
        float posyv; //posicion y del vertice izquierdo inferior
        float ancho;
        float largo;

    public:
        Rectangulo(float xv, float yv, float a, float l);

        void set_posx_vertice(float xv);
        void set_posy_vertice(float yv);
        void set_ancho(float a);
        void set_largo(float l);
        
        float get_posx_vertice();
        float get_posy_vertice();
        float get_ancho();
        float get_largo();     
};