#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;
long long a[10][10];
long long b[10][10];
int n , k;

void Init(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
}

void nhanmatran(long long x[10][10], long long y[10][10]){
    long long c[10][10] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int t = 0; t < n; t++){
                c[i][j] += (x[i][t] * y[t][j]) % mod;
                c[i][j] %= mod;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            x[i][j] = c[i][j];
        }
    }
}

void power(long long a[10][10], int k){
    if(k <= 1)  return;
    power(a, k / 2);
    nhanmatran(a, a);
    if(k % 2 == 1){
        nhanmatran(a, b);
    }    
}

void solve(){
    cin >> n >> k;
    Init();
    power(a, k);
    long long sum = 0;
     for (int i = 0; i < n; i++) {
        sum += a[i][n - i - 1] % mod;
        sum %= mod;
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}