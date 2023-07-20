#include <iostream>
#include<vector>

using namespace std;

const int N = 1e3+10;

vector<int> g[N];
bool vis[N];
vector<vector<int>> cc;
vector<int> c_cc;

void dfs(int vertex){
    // cout << vertex << endl;
    vis[vertex] = true;
    c_cc.push_back(vertex);
    for(auto child : g[vertex]){
        // cout << "Parent: " << vertex << " ->Child: " << child << endl;
        if(vis[child]==true) continue;
        dfs(child);
        //
    }
    //
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
    int ccc=0;
    cc.clear();
    for(int i=0;i<=n; i++){
        if(vis[i]) continue;
        c_cc.clear();
        dfs(i);
        cc.push_back(c_cc);
        ccc++;
    }
    cout << cc.size() <<endl;
    for(auto it:cc){
        for(auto jt:it){
            cout << jt << " ";
        }
        cout <<endl;
    }
}  