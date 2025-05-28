#include "MedicionBase.h"
#pragma once

class Presion: public MedicionBase{
    public:
        float presionEstatica; //p 
        float presionDinamica; //q 
        void imprimir() override;
        void serializar(ofstream& out) override;
        void deserializar(ifstream& in) override;
        Presion(float p, float q, float t);
};