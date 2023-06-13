#include<bits/stdc++.h>
using namespace std;

const long long maxn = 100000;
int a[maxn];
int b[maxn];

void increment(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
    }
}

void deincrement(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]) swap(a[i], a[j]);
        }
    }
}

void input(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        input(a,n);
        input(b,n);
        increment(a,n);
        deincrement(b,n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i] * b[i];
        }
        cout << sum << endl;
    }

    return 0;
}