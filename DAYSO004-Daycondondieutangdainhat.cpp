#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Số lượng testcase

    for (int testCase = 0; testCase < t; ++testCase) {
        int n;
        cin >> n; // Số lượng phần tử của dãy số

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i]; // Đọc dãy số từ đầu vào
        }

        vector<int> dp(n, 1); // Khởi tạo mảng dp với tất cả các phần tử bằng 1

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (arr[i] > arr[j] && dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1; // Cập nhật giá trị dp[i] nếu tìm thấy dãy con tăng dài hơn
                }
            }
        }

        int max_length = 0;
        for (int i = 0; i < n; ++i) {
            if (dp[i] > max_length) {
                max_length = dp[i]; // Cập nhật max_length nếu tìm thấy độ dài dãy con tăng dài nhất mới
            }
        }

        cout << max_length << endl; // In ra độ dài dãy con tăng dài nhất
        /*for (int i : dp){
            cout << i;
        }*/
    }

    return 0;
}
