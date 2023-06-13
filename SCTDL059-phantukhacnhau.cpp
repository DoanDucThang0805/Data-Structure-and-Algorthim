#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector< long long > a(n);
        vector< long long > b(n-1);
        int tmp = n - 1;    
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n - 1; i++){
            cin >> b[i];
        }
        for(int i = 0; i < n - 1; i++){
            if(a[i] != b[i]){
                tmp = i;
                break;
            }
        }
        cout << tmp + 1 << endl;
    }

    return 0;
}