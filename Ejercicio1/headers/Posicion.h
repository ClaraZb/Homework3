#include "MedicionBase.h"
#pragma once

class Posicion: public MedicionBase{
    public:
        float latitud;
        float longitud;
        float altitud;
        void imprimir() override;
        void serializar(ofstream& out) override;
        void deserializar(ifstream& in) override;
        Posicion(float lat, float lon, float alt, float t);
};