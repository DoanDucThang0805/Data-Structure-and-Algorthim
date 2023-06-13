#include<bits/stdc++.h>
using namespace std;

int sobenhat(int n){
    string tmp = to_string(n);
    int res;
    for(int i=0; i < tmp.length(); i++){
        if(tmp[i] == '5'){
            tmp[i] = '3';
        }
    }
    return res = stoi(tmp);
}

int solonnhat(int n){
    string tmp = to_string(n);
    int res;
    for(int i=0; i < tmp.length(); i++){
        if(tmp[i] == '3'){
            tmp[i] = '5';
        }
    }
    return res = stoi(tmp);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int amin = sobenhat(a);
        int amax = solonnhat(a);
        int bmin = sobenhat(b);
        int bmax = solonnhat(b);
        cout << amin + bmin << ' ' << amax + bmax << endl;
    }

    return 0;
}