#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m , n;  //! khai báo đồ thị có m đỉnh và n cạnh
        cin >> m >> n;
        vector <int> ke[1005]; //! khai báo danh sách kề
        for(int i=0;i<1001;i++) ke[i].clear();
        for(int i = 1; i <= n; i++){
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v); //! đưa đỉnh v vào danh sách kề của đỉnh u
            ke[v].push_back(u); //! đưa đỉnh u vào danh sách kề của đỉnh v
        }
        for(int i = 1; i <= m; i++){
            sort(ke[i].begin(), ke[i].end());
        }
        for(int i = 1; i <= m; i++){
            cout << i << ": ";
            for(int j = 0; j < ke[i].size(); j++){
                cout << ke[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}