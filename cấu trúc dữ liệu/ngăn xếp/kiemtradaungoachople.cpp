#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;
    stack<char> st;
    for(char x : s){
        if(x == '('){
            st.push(x);
        }else{
            if(st.empty()){
                cout << "INVALID" << endl;
            }else{
                st.pop();
            }
        }
    }
    if(st.empty()){
        cout << "VALID" << endl;
    }else{
        cout << "INVALID" << endl;
    }

    return 0;
}