#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        queue<int> q;
        q.push(9);
        while(q.size() > 0){
            int k = q.front(); q.pop();
            if(k % n == 0) {cout <<k; break;}
            q.push(k*10);
            q.push(k*10+9);
        }
        cout <<'\n';
    }

   return 0;
}