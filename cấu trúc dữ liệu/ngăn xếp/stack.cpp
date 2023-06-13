#include<bits/stdc++.h>

using namespace std;

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top() << endl; //! lấy ra phần tử đầu ngăn xếp
    st.pop(); //! xóa đi phần tử đầu ngăn xếp
    cout << st.top() << endl; //! 2
    st.pop();
    st.pop();
    if(st.empty()){ //! nếu ngăn xếp rỗng
        cout << "Empty !";
    } 

    return 0;
}