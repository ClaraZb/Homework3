#include "Presion.h"
#include "Posicion.h"
#pragma once

class SaveFlightData{
    public: 
        //Posicion posicion;
        //Presion presion;
        SaveFlightData(const Posicion& p, const Presion& q);
        //serializar
        //deserializar
        void imprimir();
};      