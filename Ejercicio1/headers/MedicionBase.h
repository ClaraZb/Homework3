#include "IMediciones.h"
#include <memory>
#pragma once

class MedicionBase: public IMediciones{
    public:
        float getTiempo();
        virtual void imprimir() = 0;
        void serializar(ofstream& out) override;
    protected:
        unique_ptr<float> tiempoMedicion;
    };