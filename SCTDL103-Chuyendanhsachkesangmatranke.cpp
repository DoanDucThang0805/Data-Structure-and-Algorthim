#include<bits/stdc++.h>
using namespace std;

int A[1001][1001] = {0};

int main(){

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int u, v;
        cin >> u >> v;
        A[i][u] = 1;
        A[i][v] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}