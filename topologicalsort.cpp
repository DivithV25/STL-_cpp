#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    void toposort(int V)
    {

        stack<int> st;//using stack to store the last node
        unordered_map<int, bool> visited;
        for (int i = 0; i < V; i++)
        {
            visited[i] = 0;
        }
        //redursive call of the toposort funciton
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
                toposort1(i, visited, st);
        }
        //printing it
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }

    void toposort1(int node, unordered_map<int, bool> &visited, stack<int> &st)
    {
        //marking the node as visited
        visited[node] = true;
        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                toposort1(neighbour, visited, st);
            }
        }
        //at last the last node is pushed into the stack and the poping order is the trversal order
        st.push(node);
    }
};
    
int main()
{
    graph g;
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    cout << "Following is a Topological Sort of the given graph: ";
    g.toposort(6);

    return 0;
}