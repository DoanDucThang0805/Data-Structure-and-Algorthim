#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        vector<int> freq(26, 0); // freq có 26 phần tử bằng 0 biểu diễn cho các chữ cái từ a -> z

        // Đếm tần suất xuất hiện của các ký tự trong xâu
        for (char c : S) {
            int index = c - 'a';
            freq[index]++;
        }

        int maxFreq = 0;

        // Tìm tần suất xuất hiện cao nhất của một ký tự trong xâu
        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
            }
        }

        int n = S.length();
        int halfLength = (n + 1) / 2;

        if (maxFreq > halfLength) {
            cout << "-1" << endl;
        } else {
            cout << "1" << endl;
        }
    }

    return 0;
}
