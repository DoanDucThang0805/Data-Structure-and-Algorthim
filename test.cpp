#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' && i != 0){
                if(s[i - 1] == '-'){
                    int j = i + 1;
                    while(s[j] != ')'){
                        if(s[j] == '-'){
                            s[j] = '+';
                        }else if(s[j] == '+'){
                            s[j] = '-';
                        }
                        j = j + 1;
                    }
                }
            }
        }
        vector<char> c;
        for(int i = 0; i < s.size(); i++){
            if (s[i] != '(' && s[i] != ')'){
                c.push_back(s[i]);
            }
        }
        for(char x : c){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}