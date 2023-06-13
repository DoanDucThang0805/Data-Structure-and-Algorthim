#include<bits/stdc++.h>

using namespace std;

string s;


void next_bit_string(string& s){
    int i = s.length() - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i >= 0){
        s[i] = '1';
    }
}

void output(const string& s){
    for(int i = 0; i < s.length(); i++){
        cout << s[i];
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    cin.ignore(); // bỏ qua ký tự xuống dòng sau khi nhập số lượng test case
    while(t--){
        getline(cin, s);
        next_bit_string(s);
        output(s);
    }
}
