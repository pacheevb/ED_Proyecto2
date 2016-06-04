#include "matrizaerolinea.h"
#include "ui_matrizaerolinea.h"
#include "agregarciudad.h"

matrizAerolinea::matrizAerolinea(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::matrizAerolinea)
{
    ui->setupUi(this);
    setWindowTitle("Matriz");

}

matrizAerolinea::~matrizAerolinea()
{
    delete ui;
}

void matrizAerolinea::on_pushButton_clicked()
{
    /*
    // Declaraciones en el archivo .h
    int cn; //cantidad de nodos
    vector< vector<int> > ady;

    // Devuelve una matriz con las distancias minimas de cada nodo al resto de los vertices.
    vector< vector<int> > Grafo :: floydWarshall(){
        vector< vector<int> > path = this->ady;

        // No tendría porqué ser necesario si ya hay ceros en las diagonales de ady
        for(int i = 0; i < cn; i++){
            path[i][i] = 0;
        }
        for(int k = 0; k < cn; k++){
            for(int i = 0; i < cn; i++){
                for(int j = 0; j < cn; j++){
                    int dt = path[i][k] + path[k][j];
                    if(path[i][j] > dt){
                        path[i][j] = dt;
                    }
                }
            }
        }
        return path;
    }
    */

}

void matrizAerolinea::on_btn_dijkstra_clicked()
{
    /*


#include <iostream>
#include <vector>
#include <string>
#include <list>

#include <limits> // for numeric_limits

#include <set>
#include <utility> // for pair
#include <algorithm>
#include <iterator>


typedef int vertex_t;
typedef double weight_t;

const weight_t max_weight = std::numeric_limits<double>::infinity();

struct neighbor {
    vertex_t target;
    weight_t weight;
    neighbor(vertex_t arg_target, weight_t arg_weight)
        : target(arg_target), weight(arg_weight) { }
};

typedef std::vector<std::vector<neighbor> > adjacency_list_t;


void DijkstraComputePaths(vertex_t source,
                          const adjacency_list_t &adjacency_list,
                          std::vector<weight_t> &min_distance,
                          std::vector<vertex_t> &previous)
{
    int n = adjacency_list.size();
    min_distance.clear();
    min_distance.resize(n, max_weight);
    min_distance[source] = 0;
    previous.clear();
    previous.resize(n, -1);
    std::set<std::pair<weight_t, vertex_t> > vertex_queue;
    vertex_queue.insert(std::make_pair(min_distance[source], source));

    while (!vertex_queue.empty())
    {
        weight_t dist = vertex_queue.begin()->first;
        vertex_t u = vertex_queue.begin()->second;
        vertex_queue.erase(vertex_queue.begin());

        // Visit each edge exiting u
    const std::vector<neighbor> &neighbors = adjacency_list[u];
        for (std::vector<neighbor>::const_iterator neighbor_iter = neighbors.begin();
             neighbor_iter != neighbors.end();
             neighbor_iter++)
        {
            vertex_t v = neighbor_iter->target;
            weight_t weight = neighbor_iter->weight;
            weight_t distance_through_u = dist + weight;
        if (distance_through_u < min_distance[v]) {
            vertex_queue.erase(std::make_pair(min_distance[v], v));

            min_distance[v] = distance_through_u;
            previous[v] = u;
            vertex_queue.insert(std::make_pair(min_distance[v], v));

        }

        }
    }
}


std::list<vertex_t> DijkstraGetShortestPathTo(
    vertex_t vertex, const std::vector<vertex_t> &previous)
{
    std::list<vertex_t> path;
    for ( ; vertex != -1; vertex = previous[vertex])
        path.push_front(vertex);
    return path;
}


int main()
{
    // remember to insert edges both ways for an undirected graph
    adjacency_list_t adjacency_list(6);
    // 0 = a
    adjacency_list[0].push_back(neighbor(1, 7));
    adjacency_list[0].push_back(neighbor(2, 9));
    adjacency_list[0].push_back(neighbor(5, 14));
    // 1 = b
    adjacency_list[1].push_back(neighbor(0, 7));
    adjacency_list[1].push_back(neighbor(2, 10));
    adjacency_list[1].push_back(neighbor(3, 15));
    // 2 = c
    adjacency_list[2].push_back(neighbor(0, 9));
    adjacency_list[2].push_back(neighbor(1, 10));
    adjacency_list[2].push_back(neighbor(3, 11));
    adjacency_list[2].push_back(neighbor(5, 2));
    // 3 = d
    adjacency_list[3].push_back(neighbor(1, 15));
    adjacency_list[3].push_back(neighbor(2, 11));
    adjacency_list[3].push_back(neighbor(4, 6));
    // 4 = e
    adjacency_list[4].push_back(neighbor(3, 6));
    adjacency_list[4].push_back(neighbor(5, 9));
    // 5 = f
    adjacency_list[5].push_back(neighbor(0, 14));
    adjacency_list[5].push_back(neighbor(2, 2));
    adjacency_list[5].push_back(neighbor(4, 9));

    std::vector<weight_t> min_distance;
    std::vector<vertex_t> previous;
    DijkstraComputePaths(0, adjacency_list, min_distance, previous);
    std::cout << "Distance from 0 to 4: " << min_distance[4] << std::endl;
    std::list<vertex_t> path = DijkstraGetShortestPathTo(4, previous);
    std::cout << "Path : ";
    std::copy(path.begin(), path.end(), std::ostream_iterator<vertex_t>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}




     */
}

void matrizAerolinea::on_btn_prim_clicked()
{
    /*

// A C / C++ program for Prim's Minimum Spanning Tree (MST) algorithm.
// The program is for adjacency matrix representation of the graph

#include <stdio.h>
#include <limits.h>

// Number of vertices in the graph
#define V 5

// A utility function to find the vertex with minimum key value, from
// the set of vertices not yet included in MST
int minKey(int key[], bool mstSet[])
{
   // Initialize min value
   int min = INT_MAX, min_index;

   for (int v = 0; v < V; v++)
     if (mstSet[v] == false && key[v] < min)
         min = key[v], min_index = v;

   return min_index;
}

// A utility function to print the constructed MST stored in parent[]
int printMST(int parent[], int n, int graph[V][V])
{
   printf("Edge   Weight\n");
   for (int i = 1; i < V; i++)
      printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
}

// Function to construct and print MST for a graph represented using adjacency
// matrix representation
void primMST(int graph[V][V])
{
     int parent[V]; // Array to store constructed MST
     int key[V];   // Key values used to pick minimum weight edge in cut
     bool mstSet[V];  // To represent set of vertices not yet included in MST

     // Initialize all keys as INFINITE
     for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;

     // Always include first 1st vertex in MST.
     key[0] = 0;     // Make key 0 so that this vertex is picked as first vertex
     parent[0] = -1; // First node is always root of MST

     // The MST will have V vertices
     for (int count = 0; count < V-1; count++)
     {
        // Pick thd minimum key vertex from the set of vertices
        // not yet included in MST
        int u = minKey(key, mstSet);

        // Add the picked vertex to the MST Set
        mstSet[u] = true;

        // Update key value and parent index of the adjacent vertices of
        // the picked vertex. Consider only those vertices which are not yet
        // included in MST
        for (int v = 0; v < V; v++)

           // graph[u][v] is non zero only for adjacent vertices of m
           // mstSet[v] is false for vertices not yet included in MST
           // Update the key only if graph[u][v] is smaller than key[v]
          if (graph[u][v] && mstSet[v] == false && graph[u][v] <  key[v])
             parent[v]  = u, key[v] = graph[u][v];
     }

     // print the constructed MST
     printMST(parent, V, graph);
}


// driver program to test above function
int main()
{

   int graph[V][V] = {{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };

    // Print the solution
    primMST(graph);

    return 0;
}

     */
}

void matrizAerolinea::on_btn_kruskal_clicked()
{
    /*
    // C++ program for Kruskal's algorithm to find Minimum Spanning Tree
    // of a given connected, undirected and weighted graph
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    // a structure to represent a weighted edge in graph
    struct Edge
    {
        int src, dest, weight;
    };

    // a structure to represent a connected, undirected and weighted graph
    struct Graph
    {
        // V-> Number of vertices, E-> Number of edges
        int V, E;

        // graph is represented as an array of edges. Since the graph is
        // undirected, the edge from src to dest is also edge from dest
        // to src. Both are counted as 1 edge here.
        struct Edge* edge;
    };

    // Creates a graph with V vertices and E edges
    struct Graph* createGraph(int V, int E)
    {
        struct Graph* graph = (struct Graph*) malloc( sizeof(struct Graph) );
        graph->V = V;
        graph->E = E;

        graph->edge = (struct Edge*) malloc( graph->E * sizeof( struct Edge ) );

        return graph;
    }

    // A structure to represent a subset for union-find
    struct subset
    {
        int parent;
        int rank;
    };

    // A utility function to find set of an element i
    // (uses path compression technique)
    int find(struct subset subsets[], int i)
    {
        // find root and make root as parent of i (path compression)
        if (subsets[i].parent != i)
            subsets[i].parent = find(subsets, subsets[i].parent);

        return subsets[i].parent;
    }

    // A function that does union of two sets of x and y
    // (uses union by rank)
    void Union(struct subset subsets[], int x, int y)
    {
        int xroot = find(subsets, x);
        int yroot = find(subsets, y);

        // Attach smaller rank tree under root of high rank tree
        // (Union by Rank)
        if (subsets[xroot].rank < subsets[yroot].rank)
            subsets[xroot].parent = yroot;
        else if (subsets[xroot].rank > subsets[yroot].rank)
            subsets[yroot].parent = xroot;

        // If ranks are same, then make one as root and increment
        // its rank by one
        else
        {
            subsets[yroot].parent = xroot;
            subsets[xroot].rank++;
        }
    }

    // Compare two edges according to their weights.
    // Used in qsort() for sorting an array of edges
    int myComp(const void* a, const void* b)
    {
        struct Edge* a1 = (struct Edge*)a;
        struct Edge* b1 = (struct Edge*)b;
        return a1->weight > b1->weight;
    }

    // The main function to construct MST using Kruskal's algorithm
    void KruskalMST(struct Graph* graph)
    {
        int V = graph->V;
        struct Edge result[V];  // Tnis will store the resultant MST
        int e = 0;  // An index variable, used for result[]
        int i = 0;  // An index variable, used for sorted edges

        // Step 1:  Sort all the edges in non-decreasing order of their weight
        // If we are not allowed to change the given graph, we can create a copy of
        // array of edges
        qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp);

        // Allocate memory for creating V ssubsets
        struct subset *subsets =
            (struct subset*) malloc( V * sizeof(struct subset) );

        // Create V subsets with single elements
        for (int v = 0; v < V; ++v)
        {
            subsets[v].parent = v;
            subsets[v].rank = 0;
        }

        // Number of edges to be taken is equal to V-1
        while (e < V - 1)
        {
            // Step 2: Pick the smallest edge. And increment the index
            // for next iteration
            struct Edge next_edge = graph->edge[i++];

            int x = find(subsets, next_edge.src);
            int y = find(subsets, next_edge.dest);

            // If including this edge does't cause cycle, include it
            // in result and increment the index of result for next edge
            if (x != y)
            {
                result[e++] = next_edge;
                Union(subsets, x, y);
            }
            // Else discard the next_edge
        }

        // print the contents of result[] to display the built MST
        printf("Following are the edges in the constructed MST\n");
        for (i = 0; i < e; ++i)
            printf("%d -- %d == %d\n", result[i].src, result[i].dest,
                                                       result[i].weight);
        return;
    }

    // Driver program to test above functions
    int main()
    {

        int V = 4;  // Number of vertices in graph
        int E = 5;  // Number of edges in graph
        struct Graph* graph = createGraph(V, E);


        // add edge 0-1
        graph->edge[0].src = 0;
        graph->edge[0].dest = 1;
        graph->edge[0].weight = 10;

        // add edge 0-2
        graph->edge[1].src = 0;
        graph->edge[1].dest = 2;
        graph->edge[1].weight = 6;

        // add edge 0-3
        graph->edge[2].src = 0;
        graph->edge[2].dest = 3;
        graph->edge[2].weight = 5;

        // add edge 1-3
        graph->edge[3].src = 1;
        graph->edge[3].dest = 3;
        graph->edge[3].weight = 15;

        // add edge 2-3
        graph->edge[4].src = 2;
        graph->edge[4].dest = 3;
        graph->edge[4].weight = 4;

        KruskalMST(graph);

        return 0;
    }
    */
}

void matrizAerolinea::on_btn_agregarCiudad_clicked()
{
    int resultado;
    QString nombreCiudad;
    agregarCiudad aC(this);
    aC.setWindowTitle("Captura Ciudad");
    resultado = aC.exec();
    if (resultado == QDialog::Rejected)
        return;
    nombreCiudad = aC.nombre();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());//NUEVA FILA

    ui->tableWidget->insertColumn(ui->tableWidget->columnCount());//Nueva Columna
    //Poner ciudad en header
    ui->tableWidget->setHorizontalHeaderItem(ui->tableWidget->columnCount() - 1,  new QTableWidgetItem(nombreCiudad));
    ui->tableWidget->setVerticalHeaderItem(ui->tableWidget->rowCount() - 1, new QTableWidgetItem(nombreCiudad) );

    //Poner ciudad en casilla de la matriz (Por si acaso)
    //ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1  , 0 , new QTableWidgetItem(nombreCiudad)); //Agregar elementos a la ultima fila, columa 0 será para el nombre
    //ui->tableWidget->setItem(0 , ui->tableWidget->columnCount() - 1  , new QTableWidgetItem(nombreCiudad));




}
