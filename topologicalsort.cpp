#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj;
    unordered_map<int, bool> visited;
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    stack<int> st;
    void toposort1(int node)
    {
        visited[node] = 1;
        for (auto i : adj[node])
        {
            if (!visited[i])
            {
                toposort1(i);
            }
        }
        st.push(node);
    }
    void printit()
    {
        while (!st.empty())
        {

            cout << st.top() << " ";
            st.pop();
        }
    }
    void toposort(int node, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                toposort1(i);
            }
        }
    }
};

int main()
{
    int m, n;
    int v;
    graph g;
    cout << "enter the number of nodes in the graph:" << endl;
    cin >> m;
    cout << "enter the number of edges in the graph:" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        g.addEdge(x, y);
    }
    cout << "enter the starting vertex:" << endl;
    cin >> v;
    g.toposort(v, m);
    g.printit();

    return 0;
}