#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

//! Định nghĩa hàm power với đầu vào là a và k, trả về giá trị a^k mod 1e9 + 7.
long long power(long long a, int k){
    // Nếu k bằng 0, trả về 1.
    if(k == 0)  return 1;
    //! Gọi đệ quy hàm power với a và k/2, lưu vào biến temp.
    long long temp = power(a, k / 2);
    //! Nếu k chẵn, trả về temp * temp mod 1e9 + 7.
    if(k % 2 == 0)  return (temp * temp) % mod;
    //! Ngược lại, trả về (temp * temp * a) mod 1e9 + 7.
    return (((temp * temp) % mod) * a) % mod;
}

//! Hàm solve đọc đầu vào a, n từ bàn phím, tính và xuất kết quả.
void solve(){
    long long a, n;
    cin >> a >> n;
    long long ketqua = power(a, n);
    cout << ketqua << endl;
}

//! Hàm main đọc số lượng bộ test t, gọi hàm solve t lần.
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
