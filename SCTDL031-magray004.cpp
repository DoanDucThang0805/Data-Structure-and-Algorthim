#include <iostream>
#include <bitset>
using namespace std;

int decimalToGray(int decimal) {
    // Chuyển số thập phân sang nhị phân
    string binary = bitset<32>(decimal).to_string();
    
    // Tạo mã màu xám bằng cách thực hiện xor (bit to bit) giữa các bit liền kề
    string gray = "";
    gray += binary[0];
    
    for (int i = 1; i < binary.length(); i++) {
        gray += to_string((binary[i] - '0') ^ (binary[i-1] - '0'));
    }
    
    // Chuyển mã màu xám về dạng thập phân
    int grayDecimal = stoi(gray, nullptr, 2);
    
    return grayDecimal;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int result = decimalToGray(N);
        cout << result << endl;
    }

    return 0;
}
