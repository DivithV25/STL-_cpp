#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj;
    unordered_map<int, bool> visited;
    // If 0 -> then undirected graph
    void addEdge(int u, int v, bool directed)
    {
        adj[u].push_back(v);
        if (directed == 0)
        {
            adj[v].push_back(u);
        }
    }

   void dfs(int node){
     cout<<node<<" ";
      visited[node]=1;
     for(auto i:adj[node]){
      if(!visited[i]){
        dfs(i);
      }
     }

   } 

};

int main()
{
   
    graph g;
 
        g.addEdge(0,1,0);
        g.addEdge(0,2 , 0);
        g.addEdge(2,1 , 0);
        g.addEdge(4,2 , 0);
        g.addEdge(5,1 , 0);
    
  
    g.dfs(0);
    
    return 0;
}