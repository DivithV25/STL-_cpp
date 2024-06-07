#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class graph
{
    public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v, bool directed)
    {
        adj[u].push_back(v);
        if (directed == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printit()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout<<endl;
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
        int x,y;
        cin>>x>>y;
      g.addEdge(x,y,0);
    }

    g.printit();

return 0;
}