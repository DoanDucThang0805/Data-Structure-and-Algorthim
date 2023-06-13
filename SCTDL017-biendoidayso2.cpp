#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;   // Nhập vào số phần tử của mảng
        int B[100][100];    // Tạo ra mảng 2 chiều để lưu kết quả tính toán
        vector<int> A(N);   
        vector<int> C(N);   // Tạo một mảng C giống mảng A để in kết quả ban đầu 
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            C[i] = A[i];
        }
        for(int i = 1; i < N; i++){ 
            for(int j = A.size() - i; j > 0; j--){
                B[i][j] = A[j] + A[j - 1];
            }
            for(int j = A.size() - i; j > 0; j--){
                A[j-1] = B[i][j];
            }
        }
        for(int i = N - 1; i >= 1; i--){
            cout << '[';
            for(int j = 1; j <= A.size() - i; j++){
                cout << B[i][j];
                if(j < A.size() - i){
                    cout << ' ';
                }
            }
            cout << ']' << ' ';
        }
        cout << '[';
        for(int i = 0; i < N; i++){
            cout << C[i];
            if(i < N - 1){
                cout << ' ';
            }
        }
        cout << ']';
    }
    return 0;
}