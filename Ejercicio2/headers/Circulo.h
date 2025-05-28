#pragma once

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