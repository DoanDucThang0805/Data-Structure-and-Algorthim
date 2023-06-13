#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
int n, k;
long long a[10][10], b[10][10];

void Init() {

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }

}

void multiply(long long x[10][10], long long y[10][10]){

    long long c[10][10];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            c[i][j] = 0;
            for(int k = 0; k < n; ++k) {
                c[i][j] += (x[i][k] * y[k][j]) % mod;
                c[i][j] %= mod;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            x[i][j] = c[i][j];
        }
    }

}

void power(long long a[10][10], int k){

    if(k <= 1) return;
    power(a, k / 2);
    multiply(a, a);
    if(k % 2 == 1) {
        multiply(a, b);
    }

}

void solve() {

    cin >> n >> k;
    Init();
    power(a, k);
    int result = 0;
    for(int i = 0; i < n; i++) {
        result += a[i][i];
        result %= mod;
    }
    cout << result << endl;

}

int main() {

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
    
}
