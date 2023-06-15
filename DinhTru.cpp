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
    visted[u] = true;
    for(int v : adj[u]){
        if(!visted[v]){
            dfs(v);
        }
    }
}

void dinhtru(){
    int cnt = 0;
    int ans = 0;
    for(int i = 1; i <= V; i++){
        if(!visted[i]){
            cnt = cnt + 1;
            dfs(i);
        }
    }
    for(int j = 1; j <= V; j++){
        memset(visted, false, sizeof(visted));
        visted[j] = true;
        int dem = 0;
        for(int t = 1; t <= V; t++){
            if(!visted[t]){
                dem = dem + 1;
                dfs(t);
            }
        }
        if(dem > cnt){
            ans = ans + 1;
        }
    }
    cout << ans;
}

int main(){
    cin >> V >> E;
    input();
    dinhtru();
    return 0;
}