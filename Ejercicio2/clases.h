#pragma once

class Punto{
    private:
        float posx;
        float posy;
    public:
        Punto(float x, float y);
        void set_posx(float x);
        void set_posy(float y);
        float get_posx();
        float get_posy();
};

class Circulo{
    private:
        float posx;
        float posy;
        float radio;
    public:
        Circulo(float x, float y, float r);
        void set_posx(float x);
        void set_posy(float y);
        void set_radio(float r);
        float get_posx();
        float get_posy();
        float get_radio();
};

class Elipse{
    private:
        float posx; //posicion x del centro
        float posy; //posicion y del centro
        float a;
        float b;
    public:
        Elipse(float x, float y, float semi_mayor, float semi_menor);
        void set_posx(float x);
        void set_posy(float y);
        void set_semieje_mayor(float semi_mayor);
        void set_semieje_menor(float semi_menor);
        float get_posx();
        float get_posy();
        float get_semieje_mayor();
        float get_semieje_menor();    
};

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


template <typename T>
class procesadorFigura{
    public:
        static float calcularArea(T& figura);
};