#include <iostream>
#include <unordered_map>
#include <list>
#include <stack>
using namespace std;

class Graph {
    int V;
    unordered_map<int, list<int>> adj;

    void topologicalSortUtil(int v, unordered_map<int, bool>& visited, stack<int>& Stack);

public:
    Graph(int V);
    void addEdge(int v, int w);
    void topologicalSort();
};

Graph::Graph(int V) {
    this->V = V;
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::topologicalSortUtil(int v, unordered_map<int, bool>& visited, stack<int>& Stack) {
    visited[v] = true;
    for (int neighbor : adj[v]) {
        if (!visited[neighbor])
            topologicalSortUtil(neighbor, visited, Stack);
    }
    Stack.push(v);
}

void Graph::topologicalSort() {
    stack<int> Stack;
    unordered_map<int, bool> visited;
    for (int i = 0; i < V; ++i)
        visited[i] = false;

    for (int i = 0; i < V; ++i) {
        if (!visited[i])
            topologicalSortUtil(i, visited, Stack);
    }

    cout << "Topological Sort: ";
    while (!Stack.empty()) {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}

int main() {
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    cout << "Following is a Topological Sort of the given graph: ";
    g.topologicalSort();

    return 0;
}
