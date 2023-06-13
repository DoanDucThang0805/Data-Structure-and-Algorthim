#include<bits/stdc++.h>
using namespace std;

int V,E,s,t;
vector <int> adj[10001];
int truoc[10001] = {0};
bool chuaxet[10001];
vector <int> ketqua;

void Init(){
    cin >> V >> E >> s >> t;
    truoc[s] = 0;
    for(int i = 0; i < E; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    memset(chuaxet, false, sizeof(chuaxet));
}

void DFS(int s){
    chuaxet[s] = true;
    for(int i : adj[s]){
        if(chuaxet[i] == false){
            truoc[i] = s;
            DFS(i);
        }
    }
}

void duongdi(){
    if(truoc[t] == 0){
        cout << -1;
    }else{
        ketqua.push_back(t);
        int x = truoc[t];
        while(x != s){
            ketqua.push_back(x);
            x = truoc[x];
        }
        ketqua.push_back(s);
        for(int t = ketqua.size()-1; t >=0; t--){
            cout << ketqua[t] << " ";
        }
        for(int t = ketqua.size()-1; t >=0; t--){
            ketqua.pop_back();
        }    
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        Init();
        DFS(s);
        duongdi();
        cout << endl;
    }
    return 0;
}