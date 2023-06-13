#include<bits/stdc++.h>
using namespace std;

void slove(string s, int n, int count1 , int count0){

    if(s.length() == n){
        cout << s << " ";
        return;
    }
    if(count1 < n/2){
        slove(s + '1', n, count1+1, count0);
    }
    if(count0 < n/2){
        slove(s + '0', n, count1, count0+1);
    }
   
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n % 2 == 1){
            cout << -1;
        }else{
            string s = "";            
            slove(s,n,0,0);
        }
        cout << endl;
    }

    return 0;
}