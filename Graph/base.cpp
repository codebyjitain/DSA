#include<bits/stdc++.h>
#include "print_graph.h"

using namespace std;

vector<vector<int>> matrixway(int n,int m){
    vector<vector<int>> graph(n , vector<int>(n,0));

    for(int i = 0;i<m;i++){
        int u,v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    return graph;
}

vector<vector<int>> listway(int n,int m){
    vector<vector<int>> graph(n+1);
    
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    return graph;
}

int main(){
    // vector<vector<int>> graph = matrixway(5,6);
    vector<vector<int>> graph = listway(5,6);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    print_graph(graph);
    
}