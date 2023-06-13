#include<bits/stdc++.h>
using namespace std;

int V, E, batdau; 
bool visted[1001];
vector <int> adj[1001];

void input(){
    for(int i = 0; i < E; i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(visted, false, sizeof(visted));
}

void dfs(int u){
    cout << u <<' ';
    visted[u] = true;
    for(int v : adj[u]){
        if(!visted[v]){
            dfs(v);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> V >> E >> batdau;
        input();
        dfs(batdau);
        cout << endl;
    }
    return 0;
}