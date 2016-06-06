#ifndef VERTICE_H_INCLUDED
#define VERTICE_H_INCLUDED
#include "LinkedList.h"
#include "Arista.h"

class Vertice{
private:
    string nombre;
    LinkedList<Arista> *aristas = new LinkedList<Arista>();
    int tipo;

public:
    Vertice(){}
    Vertice(string pNombre){
        nombre = pNombre;
    }

    Vertice(string pNombre, int pTipo){
        nombre = pNombre;
        tipo = pTipo;
    }


    string getNombre(){
        return nombre;
    }

    void setNombre(string pNombre){
        nombre = pNombre;
    }

    LinkedList<Arista> *getAristas(){
        return aristas;
    }

    void agregarArista(Arista pArista){
        bool flag = false;
        for(int i = 0; i < aristas->getSize(); i++){
            aristas->goToPos(i);
            if(aristas->getElement().getDestino() == pArista.getDestino()){
                aristas->remove();
                break;
            }
        }
        if(!flag){
            aristas->append(pArista);
        }
    }

    void eliminarArista(string pDestino){
        bool flag = false;
        for(int i = 0; i < aristas->getSize(); i++){
            aristas->goToPos(i);
            Arista temp = aristas->getElement();
            if(temp.getDestino() == pDestino){
                aristas->remove();
                flag = true;
                break;
            }
        }
    }

    void setTipo(int pTipo){
        tipo = pTipo;
    }

    int getTipo(){
        return tipo;
    }
};

#endif // VERTICE_H_INCLUDED
