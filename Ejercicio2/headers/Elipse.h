#pragma once

class Elipse{
    private:
        float posx; //posicion x del centro
        float posy; //posicion y del centro
        float a; //semieje mayor
        float b; //semieje menor

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