#ifndef VERTICE_H_INCLUDED
#define VERTICE_H_INCLUDED
#include "LinkedList.h"
#include "Arista.h"

class Vertice{
private:
    string nombre;
    LinkedList<Arista> *aristas = new LinkedList<Arista>();

public:
    Vertice(){}
    Vertice(string pNombre){
        nombre = pNombre;
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
//        if(!flag){
//            cout << "No existe ninguna arista con este destino" << endl;
//        }
    }
};

#endif // VERTICE_H_INCLUDED
