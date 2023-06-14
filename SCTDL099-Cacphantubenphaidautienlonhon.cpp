#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 1];
        vector<int> r;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            bool found = false;
            for (int j = i + 1; j < n; j++) {
                if (a[j] > a[i]) {
                    r.push_back(a[j]);
                    found = true;
                    break;
                }
            }
            if (!found) {
                r.push_back(-1);
            }
        }
        r.push_back(-1);
        for (int i = 0; i < n; i++) {
            cout << r[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
