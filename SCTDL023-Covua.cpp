#include<bits/stdc++.h>
using namespace std;

int N;
int cot[1000] = {0}; //! quan li cot
int d1[1000] = {0};  //! quan li duong cheo xuoi co chi so i - j + n
int d2[1000] = {0};  //! quan li duong cheo nguoc co chi so i + j - 1
int cnt;
void back_tracking(int pos){
    if(pos == N + 1){
        cnt = cnt + 1;
        return;
    }
    for(int i = 1; i <= N; i++){
        if(cot[i] == 0 && d1[pos - i + N] == 0 && d2[pos + i -1] == 0){
            cot[i] = 1;
            d1[pos - i + N] = 1;
            d2[pos + i - 1] = 1;
            back_tracking(pos + 1);
            cot[i] = 0;
            d1[pos - i + N] = 0;
            d2[pos + i - 1] = 0;
        }
    } 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> N;
        cnt = 0;
        back_tracking(1);
        cout << cnt << endl;
    }
    return 0;
}
