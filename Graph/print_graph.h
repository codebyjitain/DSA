#include<bits/stdc++.h>

using namespace std;

void print_graph(vector<vector<int>> matrix){
    for (int i = 0; i < matrix.size(); i++)
    {
        cout<<i<<"   ";
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        
        cout<<endl;
    }
}
void print_paired_graph(vector<vector<pair<int,int>>> graph){
    for (int i = 0; i < graph.size(); i++)
    {
        cout<<i<<"   ";
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout<<graph[i][j].first<<" "<<graph[i][j].second<<"   ";
        }
        cout<<endl;
    }
}