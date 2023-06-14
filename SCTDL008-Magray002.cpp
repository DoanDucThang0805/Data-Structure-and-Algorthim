#include <iostream>
#include <string>
using namespace std;

string binaryToGray(string binary) {
    string gray = "";
    gray += binary[0];
    for (int i = 1; i < binary.length(); i++) {
        gray += to_string((binary[i] - '0') ^ (binary[i - 1] - '0'));
    }
    return gray;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string binary;
        cin >> binary;
        string gray = binaryToGray(binary);
        cout << gray << endl;
    }

    return 0;
}
