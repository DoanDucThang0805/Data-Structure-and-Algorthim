#include<bits/stdc++.h>
using namespace std;

void slove(int k, string a, string b){

    string ketqua = "";
    while(a.length() < b.length())  a = "0" + a;
    while(b.length() < a.length())  b = "0" + b;
    int nho = 0;
    for(int i= a.length() - 1; i >= 0; i--){
       int tmp = int (a[i] - '0') + int (b[i] - '0') + nho;
       ketqua = char(tmp % k + '0') + ketqua;
       nho = tmp / k;
    }
    if(nho > 0) ketqua = char(nho + '0') + ketqua;
    cout << ketqua << endl;

}

int main(){

    int t;
    cin >> t;
    while(t--){
        string a;
        string b;
        int k;
        cin >> k >> a >> b;
        slove(k,a,b);
    }

    return 0;
}