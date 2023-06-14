#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    //cin >> n;
    //vector<int> a[n];
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //cout << matrix.size();
    cout << endl;
    for (int i=0; i<= matrix.size()-1; i++){
        for(int j = 0; j <= matrix.size()-1; j++){
            //cout << matrix[i][j]<< ' ';
        }
        //cout << endl;
    }
    cout << matrix[0][1];
}