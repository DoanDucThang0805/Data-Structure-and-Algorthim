#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> getDigits(int num) {
    std::vector<int> digits;
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
    std::reverse(digits.begin(), digits.end());
    return digits;
}

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

bool hasNDigitsFactorial(int N, int num) {
    int fact = factorial(num);
    int digitsCount = countDigits(fact);
    return digitsCount == N;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int N;
        std::cin >> N;

        std::vector<int> X_list;

        int start = 1;
        int end = 1;
        for (int i = start; i <= end; i++) {
            if (hasNDigitsFactorial(N, i)) {
                X_list.push_back(i);
            }
        }

        if (X_list.empty()) {
            std::cout << "NO" << std::endl;
        } else {
            std::cout << X_list.size() << std::endl;
            for (int X : X_list) {
                std::cout << X << std::endl;
            }
        }
    }

    return 0;
}
