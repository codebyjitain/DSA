#include<bits/stdc++.h>
#include "print_graph.h"

using namespace std;

vector<vector<int>> matrixway(int n,int m){
    vector<vector<int>> graph(n, vector<int>(n,0));

    for (int i = 0; i < m; i++)
    {
        int u,v,weight;

        cin>>u>>v>>weight;

        graph[u][v] = weight;
        graph[v][u] = weight;
    }
    return graph;
}


vector<vector<pair<int,int>>> listway(int n,int m){
    vector<vector<pair<int,int>>> graph(n);

    for (int i = 0; i < m; i++)
    {
        int u,v,weight;

        cin>>u>>v>>weight;

        pair<int ,int> temp;
        temp.first = u;
        temp.second = weight;

        
        graph[v].push_back(temp);
        pair<int ,int> temp2;
        temp2.first = v;
        temp2.second = weight;
        graph[u].push_back(temp2);
    }
    return graph;
}



int main(){
    // vector<vector<int>> graph = matrixway(5,6);
    vector<vector<pair<int,int>>> graph = listway(5,6);
    print_paired_graph(graph);
    
    return 0;
}