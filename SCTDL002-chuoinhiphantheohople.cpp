#include <iostream>
#include <string>
#include <vector>

using namespace std;

void generateBinaryStrings(string& s, int pos, vector<string>& result) {
    if (pos == s.length()) {
        result.push_back(s);
        return;
    }

    if (s[pos] == '?') {
        s[pos] = '0';
        generateBinaryStrings(s, pos + 1, result);
        s[pos] = '1';
        generateBinaryStrings(s, pos + 1, result);
        s[pos] = '?'; // Khôi phục lại ký tự '?'
    }
    else {
        generateBinaryStrings(s, pos + 1, result);
    }
}

vector<string> generateAllBinaryStrings(string s) {
    vector<string> result;
    generateBinaryStrings(s, 0, result);
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        vector<string> binaryStrings = generateAllBinaryStrings(s);

        for (const string& str : binaryStrings) {
            cout << str << endl;
        }

    }
    
    return 0;
}
