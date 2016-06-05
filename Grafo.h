#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#include "Vertice.h"
#include "LinkedList.h"

class Grafo{

private:
    int size;
    LinkedList<Vertice> vertices;

public:
    Grafo(){
        size = 0;
    }

    void agregarVertice(string pNombre){
        vertices.append(Vertice(pNombre));
        size++;
    }

    void agregarArista(string pVertice, string pDestino, float pPeso){
        if(existe(pVertice) && existe(pDestino)){
            getPos(pVertice);
            vertices.getElement().agregarArista(Arista(pPeso, pDestino));
        } else {
            cout << "Uno de los vertices no existe!" << endl;
        }
    }

    void borrarArista(string pVertice, string pDestino){
        int x = getPos(pVertice);
        vertices.goToPos(x);
        vertices.getElement().eliminarArista(pDestino);
    }

    void borrarVertice(string pVertice){
        if(existe(pVertice)){
            int tam = size;
            for(int i = 0; i < tam; i++){
                vertices.goToPos(i);
                vertices.getElement().eliminarArista(pVertice);
            }
            getPos(pVertice);
            vertices.getElement().getAristas()->clear();
            vertices.remove();
            size--;
        } else {
            cout << "Este vertice no existe" << endl;
        }
    }

    int getPos(string pVertice){
        existe(pVertice);
        int pos = 0;
        for(int i = 0; i < vertices.getSize(); i++){
            vertices.goToPos(i);
            if(vertices.getElement().getNombre() == pVertice){
                pos = i;
                break;
            }
        }
        return pos;
    }

    Vertice getVertice(int pos){
        vertices.goToPos(pos);
        Vertice aux = vertices.getElement();
        return aux;
    }

    bool existe(string pVertice){
        bool flag = false;
        vertices.goToStart();
        for(int i = 0; i < size; i++){
            vertices.goToPos(i);
            if(vertices.getElement().getNombre() == pVertice){
                flag = true;
                break;
            }
        }
        return flag;
    }

    float **crearMatriz(){
        int largo = vertices.getSize();
        float **matriz;
        matriz = new float*[largo];

        for(int j = 0; j < largo; j++){
            matriz[j] = new float[largo];
        }

        for(int i = 0; i < largo; i++){
            for(int j = 0; j < largo; j++){
                matriz[i][j] = 0;
            }
        }

        for(int i = 0; i < largo; i++){
            vertices.goToPos(i);
            LinkedList<Arista> * temp = vertices.getElement().getAristas();
            for(int j = 0; j < temp->getSize(); j++){
                temp->goToPos(j);
                int x = getPos(temp->getElement().getDestino());
                matriz[i][x] = temp->getElement().getPeso();
            }
        }
        return matriz;
    }

    void mostrarGrafo(){
        vertices.goToStart();
        for(int i = 0; i < size; i++){
            vertices.goToPos(i);
            cout << "V. " << vertices.getElement().getNombre();
            for(int x = 0; x < vertices.getElement().getAristas()->getSize(); x++){
                vertices.getElement().getAristas()->goToPos(x);
                cout << " -> " << vertices.getElement().getAristas()->getElement().getDestino() << "/ " << vertices.getElement().getAristas()->getElement().getPeso();
            }
            cout << endl;
        }
    }

    int getSize(){
        return size;
    }
};

#endif // GRAFO_H_INCLUDED
