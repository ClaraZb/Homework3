#include "IMediciones.h"
#include <memory>
#pragma once

//Clase abstracta
class MedicionBase: public IMediciones{
    public:
        virtual void imprimir() = 0;
        float getTiempo();
        void serializar(ofstream& out) const override; 
        void deserializar(ifstream& in) override;
        virtual ~MedicionBase(){}; //destructor
    
    protected:
        unique_ptr<float> tiempoMedicion;
        MedicionBase(const MedicionBase& otro); //para la copia 
        MedicionBase(float t);
};