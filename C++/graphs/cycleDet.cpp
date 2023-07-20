#include <iostream>
#include<vector>

using namespace std;

const int N = 1e3+10;

vector<int> g[N];
bool vis[N];
vector<vector<int>> cc;
vector<int> c_cc;

bool dfs(int vertex,int par){
    // cout << vertex << endl;
    vis[vertex] = true;
    bool isLoopExists= false;
    c_cc.push_back(vertex);
    for(auto child : g[vertex]){
        // cout << "Parent: " << vertex << " ->Child: " << child << endl;
        if(vis[child] && child==par) continue;
        if(vis[child]==true) return true;
        isLoopExists |= dfs(child,vertex);
        //
    }
    //
    return isLoopExists;
}

int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bool isLoopExists = false;
    for(int i=1;i<=n;i++){
        if(vis[i]) continue;
        if(dfs(i,0)) {
            isLoopExists = true;
            break;
        }
    }
    cout << isLoopExists << endl;
}  