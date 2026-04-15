#include <iostream>
using namespace std;

class Graph {
private:
    int vertices;
    int** adjacencyMatrix;
public:
    Graph(int v) : vertices(v) {
        adjacencyMatrix = new int*[v];
        for (int i = 0; i < v; i++) {
            adjacencyMatrix[i] = new int[v];
            for (int j = 0; j < v; j++) adjacencyMatrix[i][j] = 0;
        }
    }
    
    void addEdge(int u, int v) {
        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1;
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    return 0;
}
