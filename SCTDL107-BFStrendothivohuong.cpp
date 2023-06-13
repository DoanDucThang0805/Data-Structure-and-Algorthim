#include<bits/stdc++.h>
using namespace std;

int V, E, batdau;
bool visted[10001];
vector <int> adj[10001];

void input(){
    for(int i = 0; i < E; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(visted, false, sizeof(visted));
}

void BFS(int u){
    queue <int> q;
    q.push(u);
    visted[u] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << ' ';
        for(int i : adj[x]){
            if(visted[i] == false){
                q.push(i);
                visted[i] = true;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> V >> E >> batdau;
        input();
        BFS(batdau);
        cout << endl;
    }
    return 0;
}