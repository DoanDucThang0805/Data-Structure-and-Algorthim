#include<bits/stdc++.h>
using namespace std;

int a[1000000];
int n;

void sovle(){
    int max = a[0];
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i ; j < n; j++){
            sum = sum + a[j];
            if(max < sum){
                max = sum;
            }
        }
    }
    cout << max;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sovle();
        cout << endl;
    }
    return 0;
}