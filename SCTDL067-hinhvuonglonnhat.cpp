#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findLargestSquare(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int largestSquare = 0;

    vector<vector<int>> dp(n, vector<int>(m, 0));

    // Cập nhật giá trị cho hàng đầu tiên
    for (int j = 0; j < m; j++) {
        dp[0][j] = grid[0][j];
        largestSquare = max(largestSquare, dp[0][j]);
    }

    // Cập nhật giá trị cho cột đầu tiên
    for (int i = 0; i < n; i++) {
        dp[i][0] = grid[i][0];
        largestSquare = max(largestSquare, dp[i][0]);
    }

    // Cập nhật giá trị cho các ô còn lại
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (grid[i][j] == 1) {
                dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                largestSquare = max(largestSquare, dp[i][j]);
            }
        }
    }

    return largestSquare;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<vector<int>> grid(N, vector<int>(M, 0));

        // Đọc dữ liệu cho bảng
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> grid[i][j];
            }
        }

        int result = findLargestSquare(grid);
        cout << result << endl;
    }

    return 0;
}
