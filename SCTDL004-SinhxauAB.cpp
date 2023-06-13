#include<bits/stdc++.h>
using namespace std;

char x[100];
int n;
int kiemtra;

void Init(int n){

    int i;
    for(i=1; i<=n; i++){
        x[i]='A';
    }

}

void ketqua(){

    int i;
    for(i=1; i<=n; i++){
        cout << x[i];
    }
    cout << ' ';

}

void sinhxau(){

    int i = n;
    while(i > 0 && x[i] == 'B'){
        x[i] = 'A';
        i--;
    }
    if(i > 0){
        x[i] = 'B';
    }else{
        kiemtra = 0;
    }

}

int main(){

    int t;
    cin >> t;
    while(t--){
        kiemtra = 1;
        cin >> n;
        Init(n);
        while(kiemtra){
            ketqua();
            sinhxau();
        }
        cout << endl;
    }

    return 0;
}