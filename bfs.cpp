#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj;
    unordered_map<int, bool> visited;
    vector<int> ans;
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
    vector<int> bfs(int node)
    {
        queue<int> q;//queue declared
        q.push(node);//first element is pushed into the queue
        visited[node] = 1;//it is marked as visited
        while (!q.empty())
        {
            int frontnode = q.front();
            q.pop();

            ans.push_back(frontnode);//pushing the front node to the ans vector 
            for (auto i : adj[frontnode])//checking wether all the neighbouring elements in the list are visited and pushing them to the queue 
            {

                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
        return ans;
    }
    void printit()
    {

        for (auto i : ans)
        {
            cout << i << " ";
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

    g.printit();
    g.bfs(5);
    g.printit();
    return 0;
}