#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 1000; // giá trị tối đa của n
vector<int> a(MAX_N); // vector để lưu trữ mảng a

// hàm để in ra mảng a
void printArray(const vector<int>& arr, int size) {
    cout << '[';
    for(int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ' ';
    }
    cout << ']' << endl;
}

// hàm để tính toán và in ra các dãy con của mảng a
void calculateSubarrays(vector<int>& arr, int size) {
    for(int i = 1; i < size; i++){
        cout << '[';
        for(int j = 0; j < size - i; j++){
            arr[j] = arr[j] + arr[j + 1];
            cout << arr[j];
            if(j < size - i - 1) cout << ' ';
        }
        cout << ']' << endl;
    }
}

int main() {
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        printArray(a, n);
        calculateSubarrays(a, n);
    }
    return 0;
}
