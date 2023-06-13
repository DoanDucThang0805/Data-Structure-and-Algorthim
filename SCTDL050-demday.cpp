#include <bits/stdc++.h>
const int MOD=1e9+7;
#define mod 123456789
#define ll long long
using namespace std;

ll tinh(ll a, ll n){
    if(n == 0) return 1;
    ll tmp = tinh(a,n/2);
    if(n%2) return ((a*(tmp*tmp))%mod)%mod;
    return (tmp*tmp)%mod;
}
int main(){
    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >>n;
        cout <<tinh(2,n-1) <<'\n';
    }
   return 0;
}