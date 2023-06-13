#include<bits/stdc++.h>
using namespace std;

int N, K;
int a[1000];

void ketqua(){
    for(int i = 1; i <= K; i++){
        cout << a[i];
    }
    cout << " ";
}

void Back_Tracking(int pos){
    for(int i = a[pos - 1] + 1; i <= N - K + pos; i++){
        a[pos] = i;
        if(pos == K){
            ketqua();
        }else{
            Back_Tracking(pos + 1);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> N >> K;
        a[0] = 0;
        Back_Tracking(1);
        cout << endl;
    }
}

/*
vị trí kế tiếp nhỏ nhất là a[pos - 1] + 1 lớn nhất là N - K + pos 


*/