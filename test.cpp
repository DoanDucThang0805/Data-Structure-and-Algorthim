#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n + 1];
        int b[m + 1];
        vector<int> c;
        vector<int> d;
        int check[n + m + 1] = {1};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i] == b[j]){
                    c.push_back(a[i]);
                }
            }
        }
        for(int i = 0; i < n; i++){
                d.push_back(a[i]);
        }
        for(int i = 0; i < m; i++){
                d.push_back(b[i]);
        }
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        for(int i : c){
            cout << i << ' ';
        }
        cout << endl;
        for (int i : d){
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}