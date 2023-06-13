#include <iostream>
#include <vector>

using namespace std;

vector<int> a;
int N;

void ketqua(){
    cout << "(";
    for(int i = 0; i < a.size(); i++){
        cout << a[i];
    }
    cout << ")";
}

void tach_so(int sum, int prev){
    if(sum == N){
        ketqua();
        return;
    }
    for(int i = prev; i >= 1; i--){
        if (sum + i <= N) {
            a.push_back(i);
            tach_so(sum + i, i);
            a.pop_back();
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> N;
        tach_so(0, N);
        cout << endl;
    }
    return 0;
}
