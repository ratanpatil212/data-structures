#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    // graph here
    //adj matrix
    // #costly
    // int adj[n+1][m+1];
    // for(int i =0;i<m;i++){
    //     // O(n) space complexity
    //     int u,v;
    //     cin >> u >> v;
    //     adj[u][v] = 1;
    //     adj[v][u] =1;
    // }
    // return 0;

    //adj list
    vector<int> adj[n+1];
    for(int i =0;i<m;i++){
        int u,v;
        cin >> u>> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}