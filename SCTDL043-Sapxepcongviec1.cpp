#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second; // sắp xếp các hành động theo thời gian kết thúc tăng dần
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<pair<int, int>> actions(n);
        for (int i = 0; i < n; i++) {
            cin >> actions[i].first; // thời gian bắt đầu của hành động i
        }
        for (int i = 0; i < n; i++) {
            cin >> actions[i].second; // thời gian kết thúc của hành động i
        }
        sort(actions.begin(), actions.end(), cmp);
        vector<pair<int, int>> schedule;
        schedule.push_back(actions[0]); // chọn hành động đầu tiên làm hành động đầu tiên của lịch trình
        for (int i = 1; i < n; i++) {
            if (actions[i].first >= schedule.back().second) { // nếu thời gian bắt đầu của hành động i lớn hơn hoặc bằng thời gian kết thúc của hành động cuối cùng trong lịch trình
                schedule.push_back(actions[i]); // thêm hành động i vào lịch trình
            }
        }
        cout << schedule.size() << endl; // in ra số lượng hành động trong lịch trình
    }
    return 0;
}
