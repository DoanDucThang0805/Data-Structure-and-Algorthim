#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        long long socachbuoc[n+1];
        socachbuoc[0] = socachbuoc[1] = 1; //? trường hợp cơ sở
        for(int i = 2; i <= n; i++){
            for(int j = 1; j <= min(i, k); j++){
                socachbuoc[i] += socachbuoc[i - j];
                socachbuoc[i] %= mod;
            }
        }
        cout << socachbuoc[n];
    }

}