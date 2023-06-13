#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
char a[MAXN][MAXN];
int n, m, count;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int vis[MAXN][MAXN];

void dfs(int x, int y) {
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] == '.' && !vis[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

int count_rooms() {
    int count = 0;
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.' && !vis[i][j]) {
                dfs(i, j);
                count++;
            }
        }
    }
    return count;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cout << count_rooms() << endl;
    return 0;
}
