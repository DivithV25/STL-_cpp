#include <bits/stdc++.h>
using namespace std;

unordered_map<int, vector<pair<int, int>>> adj;
unordered_map<int, bool> visited;

void addEdge(int u, int v, int wt)
{
    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});
}

int prims(int start)
{

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int sum = 0;

    pq.push({0, start});
    while (!pq.empty())
    {
        auto p = pq.top();
        pq.pop();
        int wt = p.first;
        int ver = p.second;
        if (visited[ver] == true)
        {
            continue;
        }
        cout<<ver<<" ";
        visited[ver] = true;
        sum = sum + wt;
        for (auto it : adj[ver])
        {
            if (visited[it.first] == false)
            {
                pq.push({it.second, it.first});
            }
        }
    }
    return sum;
}

int main()
{

addEdge(1,2,24);
addEdge(2,4,20);
addEdge(1,3,3);
addEdge(4,3,12);

cout<<prims(1);

}