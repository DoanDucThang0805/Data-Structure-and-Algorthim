#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        int res = -1;
        for(int j = i + 1; j < n; j++){
            if(a[j] > a[i]){
                res = a[j];
                break;
            }
        }
        cout << res << ' ';
    }

    return 0;
}