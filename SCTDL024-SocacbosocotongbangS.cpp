#include <iostream>
using namespace std;

int countTriplets(int K, int S) {
    int count = 0;
    
    // Duyệt qua tất cả các cặp (X, Y)
    for (int X = 0; X <= K; X++) {
        for (int Y = 0; Y <= K; Y++) {
            int Z = S - X - Y;
            if (Z >= 0 && Z <= K) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int K, S;
        cin >> K >> S;
        int result = countTriplets(K, S);
        cout << result << endl;
    }

    return 0;
}
