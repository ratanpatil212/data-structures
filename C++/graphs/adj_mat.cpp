#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

// Graph class
class Graph {
    int V; // Number of vertices
    vector<vector<bool>> adjMatrix; // Adjacency matrix

public:
    Graph(int vertices) {
        V = vertices;
        adjMatrix.resize(V, vector<bool>(V, false));
    }

    void addEdge(int u, int v) {
        adjMatrix[u][v] = true;
        adjMatrix[v][u] = true;
    }

    void BFS(int startVertex) {
        queue<int> q;
        vector<bool> visited(V, false);

        visited[startVertex] = true;
        q.push(startVertex);

        while (!q.empty()) {
            int currVertex = q.front();
            cout << currVertex << " ";
            q.pop();

            for (int adjVertex = 0; adjVertex < V; adjVertex++) {
                if (adjMatrix[currVertex][adjVertex] && !visited[adjVertex]) {
                    visited[adjVertex] = true;
                    q.push(adjVertex);
                }
            }
        }
    }

    void DFS(int startVertex) {
        vector<bool> visited(V, false);
        stack<int> s;

        visited[startVertex] = true;
        s.push(startVertex);

        while (!s.empty()) {
            int currVertex = s.top();
            cout << currVertex << " ";
            s.pop();

            for (int adjVertex = 0; adjVertex < V; adjVertex++) {
                if (adjMatrix[currVertex][adjVertex] && !visited[adjVertex]) {
                    visited[adjVertex] = true;
                    s.push(adjVertex);
                }
            }
        }
    }
};

int main() {
    // Create a graph
    Graph g(8);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
    g.addEdge(5, 6);
    g.addEdge(6, 7);

    cout << "BFS Traversal: ";
    g.BFS(4);
    cout << endl;

    cout << "DFS Traversal: ";
    g.DFS(7);
    cout << endl;

    return 0;
}
