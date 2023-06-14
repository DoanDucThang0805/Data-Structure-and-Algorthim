#include <iostream>
#include <vector>

using namespace std;

// Hàm tìm mảng hợp
vector<int> findUnion(const vector<int>& A, const vector<int>& B) {
    vector<int> unionArr;
    int i = 0, j = 0;
    int n = A.size(), m = B.size();

    while (i < n && j < m) {
        if (A[i] < B[j]) {
            unionArr.push_back(A[i]);
            i++;
        } else if (A[i] > B[j]) {
            unionArr.push_back(B[j]);
            j++;
        } else {
            unionArr.push_back(A[i]);
            i++;
            j++;
        }
    }

    // Duyệt qua các phần tử còn lại trong mảng A (nếu có)
    while (i < n) {
        unionArr.push_back(A[i]);
        i++;
    }

    // Duyệt qua các phần tử còn lại trong mảng B (nếu có)
    while (j < m) {
        unionArr.push_back(B[j]);
        j++;
    }

    return unionArr;
}

// Hàm tìm mảng giao
vector<int> findIntersection(const vector<int>& A, const vector<int>& B) {
    vector<int> intersectionArr;
    int i = 0, j = 0;
    int n = A.size(), m = B.size();

    while (i < n && j < m) {
        if (A[i] < B[j]) {
            i++;
        } else if (A[i] > B[j]) {
            j++;
        } else {
            intersectionArr.push_back(A[i]);
            i++;
            j++;
        }
    }

    return intersectionArr;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<int> A(n), B(m);

        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> B[i];
        }

        vector<int> unionArr = findUnion(A, B);
        vector<int> intersectionArr = findIntersection(A, B);

        // In mảng hợp
        for (int i = 0; i < unionArr.size(); i++) {
            cout << unionArr[i] << " ";
        }
        cout << endl;

        // In mảng giao
        for (int i = 0; i < intersectionArr.size(); i++) {
            cout << intersectionArr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
