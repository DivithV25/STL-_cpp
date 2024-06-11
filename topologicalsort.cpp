#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;
    unordered_map<int, bool> visited;
    stack<int> st;
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }
    void topology(int node)
    {
        visited[node] = 1;
        for (auto i : adj[node])
        {
            if (!visited[i])
            {
                topology(i);      
            }
        }
        st.push(node);
    }
    void toposort(int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                topology(i);
            }
        }
        while(!st.empty()){
             cout<<st.top()<<" ";
             st.pop();

        }
    }
    
};
int main(){
   graph g;
   g.addEdge(5,0);
   g.addEdge(5,2);
   g.addEdge(2,3);
   g.addEdge(3,1);
   g.addEdge(4,0);
   g.addEdge(4,1);
g.toposort(6);

}