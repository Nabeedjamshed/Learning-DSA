// #include <iostream>
// #include <vector>
// #include <queue>  // Required for BFS

// using namespace std;

// class Graph {
// private:
//     int numVertices;
//     vector<vector<int>> adjMatrix;

// public:
//     // Constructor to initialize the graph with the number of vertices
//     Graph(int vertices) {
//         numVertices = vertices;
//         adjMatrix.resize(vertices, vector<int>(vertices, 0));
//     }

//     // Add an edge to the graph
//     void addEdge(int i, int j) {
//         if (i >= 0 && i < numVertices && j >= 0 && j < numVertices) {
//             adjMatrix[i][j] = 1;
//             adjMatrix[j][i] = 1;  // Comment this line if the graph is directed
//         }
//     }

//     // Remove an edge from the graph
//     void removeEdge(int i, int j) {
//         if (i >= 0 && i < numVertices && j >= 0 && j < numVertices) {
//             adjMatrix[i][j] = 0;
//             adjMatrix[j][i] = 0;  // Comment this line if the graph is directed
//         }
//     }

//     // Print the adjacency matrix
//     void printMatrix() {
//         for (int i = 0; i < numVertices; i++) {
//             for (int j = 0; j < numVertices; j++) {
//                 cout << adjMatrix[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     // BFS algorithm
//     void BFS(int startVertex) {
//         vector<bool> visited(numVertices, false);
//         queue<int> q;

//         visited[startVertex] = true;
//         q.push(startVertex);

//         cout << "BFS Traversal starting from vertex " << startVertex << ": ";

//         while (!q.empty()) {
//             int vertex = q.front();
//             cout << vertex << " ";
//             q.pop();

//             for (int i = 0; i < numVertices; i++) {
//                 if (adjMatrix[vertex][i] == 1 && !visited[i]) {
//                     visited[i] = true;
//                     q.push(i);
//                 }
//             }
//         }

//         cout << endl;
//     }
// };

// int main() {
//     Graph g(6);

//     g.addEdge(0, 20);
//     g.addEdge(0, 4);
//     g.addEdge(20, 2);
//     g.addEdge(20, 3);
//     g.addEdge(20, 4);
//     g.addEdge(2, 3);
//     g.addEdge(3, 4);
//     g.addEdge(2, 5);

//     cout << "Adjacency Matrix:" << endl;
//     g.printMatrix();

//     // Perform BFS starting from vertex 0
//     g.BFS(0);

//     return 0;
// }

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph
{
private:
    int numVertices;
    vector<vector<int>> adjmatrix;

public:
    Graph(int vertices)
    {
        numVertices = vertices;
        adjmatrix.resize(vertices, vector<int>(vertices, 0));
    }
    void addedge(int i, int j)
    {
        if (i >= 0 && i < numVertices && j >= 0 && j < numVertices)
        {
            adjmatrix[i][j] = 1;
            adjmatrix[j][i] = 1;
        }
    }

    void removeedge(int i, int j)
    {
        if (i >= 0 && i < numVertices && j >= 0 && j < numVertices)
        {
            adjmatrix[i][j] = 0;
            adjmatrix[j][i] = 0;
        }
    }

    void print()
    {
        for (int i = 0; i < numVertices; i++)
        {
            for (int j = 0; j < numVertices; j++)
            {
                cout << adjmatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    void BFS(int startvertex)
    {
        vector<bool> visited(numVertices, false);
        queue<int> q;

        visited[startvertex] = true;
        q.push(startvertex);

        while (!q.empty())
        {
            int vertex = q.front();
            cout << vertex << " ";
            q.pop();

            for (int i = 0; i < numVertices; i++)
            {
                if (adjmatrix[vertex][i] == 1 && !visited[i])
                {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        cout << endl;
    }
};
int main()
{

    Graph g(5);
    g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 2);
    g.addedge(2, 3);
    g.addedge(3, 1);
    g.addedge(3, 4);
    g.print();
    cout << endl;
    g.removeedge(3, 4);
    g.print();
    g.BFS(0);
    return 0;
}