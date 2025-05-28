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