#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; //! khai báo n đỉnh của đồ thị
    cin >> n;
    int A[1005][1005]; //! khai báo ma trận kề của đồ thị
    vector <int> ke[1005];  //! khai báo danh sách kề của đồ thị
    //! nhập ma trận kề 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
                cin >> A[i][j];
        }
    }
    //! chuyển sang danh sách kề 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(A[i][j] == 1){
                ke[i].push_back(j);
            }
        }
    }
    //! in kết quả
    for(int i = 1; i <= n; i++){
        cout << i << ": ";
        for(int j = 0; j < ke[i].size(); j++){
            cout << ke[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}