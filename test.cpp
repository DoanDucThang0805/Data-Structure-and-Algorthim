#include <iostream>
#include <string>

using namespace std;

// Hàm chuyển đổi từ mã nhị phân thành mã Gray
string binaryToGray(string binary) {
    string gray = "";
    gray += binary[0];

    for (int i = 1; i < binary.length(); ++i) {
        // XOR giữa bit hiện tại của mã nhị phân và bit trước đó của mã Gray
        if (binary[i] != gray[i - 1]) {
            gray += '1';
        } else {
            gray += '0';
        }
    }

    return gray;
}

int main() {
    int T;
    cin >> T; // Số lượng test

    for (int testCase = 0; testCase < T; ++testCase) {
        int n;
        cin >> n; // Độ dài của xâu nhị phân

        string binary;
        cin >> binary; // Đọc xâu nhị phân từ đầu vào

        string gray = binaryToGray(binary); // Chuyển đổi thành xâu mã Gray

        cout << gray << endl; // In ra xâu mã Gray tương ứng
    }

    return 0;
}
