#include<iostream>
#include<vector>
using namespace std;

int main() {
    int edge, vertice;
    cout<<"Enter number of vertices: ";
    cin>>vertice;
    cout<<"Enter number of edges: ";
    cin>>edge;

    vector <int> adjacencylist[vertice+1];

    for (int i = 0; i < edge; i++)
    {
        int u,v;
        cout<<"Enter edges (format u,v): ";
        cin>>u>>v;
        adjacencylist[u].push_back(v);
        adjacencylist[v].push_back(u);
    }
    
    for (int i = 1; i <= vertice; i++)
    {
        cout<<i<<": ";
        for(int j : adjacencylist[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}