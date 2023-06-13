#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
const int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

int N;
vector<vector<int>> board;
vector<vector<int>> dist;

bool isValid(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N);
}

int shortestPath(int x1, int y1, int x2, int y2) {
    queue<pair<int, int>> q;
    q.push({x1, y1});
    dist[x1][y1] = board[x1][y1];

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();
        int x = curr.first;
        int y = curr.second;

        if (x == x2 && y == y2) {
            return dist[x][y];
        }

        for (int i = 0; i < 8; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (isValid(newX, newY) && (dist[x][y] + board[newX][newY] < dist[newX][newY])) {
                dist[newX][newY] = dist[x][y] + board[newX][newY];
                q.push({newX, newY});
            }
        }
    }

    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cin >> N;

        board.clear();
        dist.clear();
        board.resize(N, vector<int>(N));
        dist.resize(N, vector<int>(N, INT_MAX));

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> board[i][j];
            }
        }

        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int result = shortestPath(x1 - 1, y1 - 1, x2 - 1, y2 - 1);
        cout << result << endl;
    }

    return 0;
}
