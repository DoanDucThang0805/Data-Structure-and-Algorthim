#include <iostream>
#include <string>
using namespace std;

string grayToBinary(string gray) {
    string binary = "";
    binary += gray[0];
    for (int i = 1; i < gray.length(); i++) {
        binary += to_string((gray[i] - '0') ^ (gray[i - 1] - '0'));
    }
    return binary;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string gray;
        cin >> gray;
        string binary = grayToBinary(gray);
        cout << binary << endl;
    }

    return 0;
}
