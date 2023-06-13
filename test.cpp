#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    
    return decimal;
}

int multiplyBinaryStrings(string s1, string s2) {
    int num1 = binaryToDecimal(s1);
    int num2 = binaryToDecimal(s2);
    
    int product = num1 * num2;
    
    return product;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string s1, s2;
        cin >> s1 >> s2;
        int result = multiplyBinaryStrings(s1, s2);
        cout << result << endl;
    }
    
    return 0;
}
