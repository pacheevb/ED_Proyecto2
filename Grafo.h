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
        int tam = vertices.getSize();
        bool flag = false;
        for(int i = 0; i < tam; i++){
            if(vertices.getElement().getNombre() == pNombre){
                cout << "Ya existe este vertice" << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            vertices.append(Vertice(pNombre));
            size++;
        }
    }

    void agregarVertice(string pNombre, int pTipo){
        int tam = vertices.getSize();
        bool flag = false;
        for(int i = 0; i < tam; i++){
            if(vertices.getElement().getNombre() == pNombre){
                cout << "Ya existe este vertice" << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            vertices.append(Vertice(pNombre, pTipo));
            size++;
        }
    }

    void agregarVertice(string pNombre, int pTipo, string pDatos[7]){
        int tam = vertices.getSize();
        bool flag = false;
        for(int i = 0; i < tam; i++){
            if(vertices.getElement().getNombre() == pNombre){
                cout << "Ya existe este vertice" << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            vertices.append(Vertice(pNombre, pTipo, pDatos));
            size++;
        }
    }

    float getPeso(string inicio, string destino){
        if (existe(inicio) && existe(destino)){
            float**matriz = crearMatriz();
            int posicionInicio = getPos(inicio);
            int posicionFin = getPos(destino);
            return matriz[posicionInicio][posicionFin];
        }else{
            cout << "No hay peso entre esos dos vertices" << endl;
        }
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

    float** tablaFloyd(){
        cout << "Tabla Floyd" << endl;
        float** matriz = crearMatriz();
        for (int k = 0; k < vertices.getSize(); k++){
            for (int i = 0; i < vertices.getSize(); i++){
                for (int j = 0; j < vertices.getSize(); j++){
                    float distancia = matriz[i][k] + matriz[k][j];
                    if (matriz[i][j] > distancia){
                        matriz[i][j] = distancia;
                    }
                }
            }
        }
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                cout << "|" << matriz[i][j];
            }
            cout << "|" << endl;
        }
        return matriz;
    }

    bool visitadoTodo(bool lista[], int largo){
        bool visitadoTodo = true;
        for (int i = 0; i < largo; i++){
            if (lista[i] == false){
                visitadoTodo = false;
                break;
            }
        }
        return visitadoTodo;
    }

    int printSolution(float dist[], int n){
        cout << "Vertex  Distance from Source\n" << endl;
        for (int i = 0; i < vertices.getSize(); i++){
            cout << i << " : " << dist[i] << endl;
        }
    }

    int getMinimoDjikstra(bool visitado[], float pesos[]){
        int indice = 0;
        float minimo = 9999;
        for (int i = 0; i < vertices.getSize(); i++){
            if (visitado[i] == false && pesos[i] < minimo){
                indice = i;
                minimo = pesos[indice];
            }
        }
        return indice;
    }

    float** Dijkstra(string vertice, float **matriz){
        float distancias [vertices.getSize()];// lista de distancias
        bool visitados [vertices.getSize()];// lista de vertices visitados

        int fila = getPos(vertice);
        vertices.goToPos(fila);

        for (int i = 0; i < vertices.getSize(); i++){
            distancias[i] = 9999;
            visitados[i] = false;
        }

        distancias[fila] = 0;

        for (int i = 0; i < vertices.getSize() - 1; i++){
            int u = getMinimoDjikstra(visitados, distancias);
            visitados[u] = true;
            for (int v = 0; v < vertices.getSize(); v++){
                if (!visitados[v] && matriz[u][v] != 9999 && distancias[u] != 9999 &&
                    distancias[u] + matriz[u][v] < distancias[v]){
                        distancias[v] = distancias[u] + matriz[u][v];
                }
            }

        }

        for (int i = 0; i < vertices.getSize(); i++){
            matriz[fila][i] = distancias[i];
        }

        return matriz;
    }

    //ocupa arreglos
    float** tablaDijkstra(){
        float** matriz = crearMatriz();
        for (int i = 0; i < vertices.getSize(); i++){
            vertices.goToPos(i);
            string ciudad = vertices.getElement().getNombre();
            matriz = Dijkstra(ciudad, matriz);
        }

        cout << "Tabla dijkstra" << endl;
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                cout << "|" << matriz[i][j];
            }
            cout << "|" << endl;
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
