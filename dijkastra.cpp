#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
unordered_map<int, vector<pair<int, int>>> adj;
unordered_map<int, bool> visited;

void addEdge(int u, int v, int wt)
{
    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});
}

void shortest_path(int start, int vertices)
{
    vector<int> distance(vertices,INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    distance[start] = 0;
    pq.push({0, start});
    while (!pq.empty())
    {
        auto p = pq.top();
        pq.pop();
        int wt = p.first;
        int ver = p.second;
        for (auto it : adj[ver])
        {
            int ver1 = it.first;
            int wt1 = it.second;
            if (distance[ver1] > distance[ver] + wt1)
            {
                distance[ver1] = distance[ver] + wt1;
                pq.push({distance[ver1], ver1});
            }
        }
    }

    for (int i = 0; i < vertices; i++)
    {
        cout << i << " " << distance[i] << endl;
    }

  
}

int main()
{
addEdge(0,1,1);
addEdge(1,3,2);
addEdge(0,2,4);
addEdge(2,3,3);

    shortest_path(0, 4);

   
}