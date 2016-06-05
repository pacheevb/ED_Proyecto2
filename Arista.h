#ifndef ARISTA_H_INCLUDED
#define ARISTA_H_INCLUDED
#include "Vertice.h"

class Arista{

private:
    float peso;
    string destino;

public:
    Arista(){}
    Arista(float pPeso, string pDestino){
        peso = pPeso;
        destino = pDestino;
    }

    void setPeso(float pPeso){
        this->peso = pPeso;
    }

    void setDestino(string pDestino){
        destino = pDestino;
    }

    float getPeso(){
        return peso;
    }

    string getDestino(){
        return destino;
    }
};

#endif // ARISTA_H_INCLUDED
