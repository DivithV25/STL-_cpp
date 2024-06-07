#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj;
    unordered_map<int, bool> visited;
 
//creating edges
    void addEdge(int u, int v, bool directed)
    {
        adj[u].push_back(v);
        if (directed == 0)
        {
            adj[v].push_back(u);
        }
    }
   //BFS
   void bfs(int node)
    {
        queue<int> q;//queue declared
        q.push(node);//first element is pushed into the queue
        visited[node] = 1;//it is marked as visited
        while (!q.empty())
        {
            int frontnode = q.front();
            q.pop();

            cout<<frontnode<<" ";//pritning the node that is being pushed into the queue
            for (auto i : adj[frontnode])//checking wether all the neighbouring elements in the list are visited and pushing them to the queue 
            {

                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = 1;
                }
            } 
        }
      
    }
 
};

int main()
{
    int m, n;
    graph g;
    cout << "enter the number of nodes in the graph:" << endl;
    cin >> m;
    cout << "enter the number of edges in the graph:" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        g.addEdge(x, y, 0);
    }

  
    g.bfs(5);
    
    return 0;
}