#include<bits/stdc++.h>
using namespace std;

int kiemtra;
int x[1000];
int n;
vector<int> v;

void Init(){

    for(int i=1; i<=n; i++){
        x[i]=i;
    }

}

void ketqua(){

    for(int i=1; i<=n; i++){
        cout << x[i];
    }
    cout << ' ';

}

void sinh_hoan_vi(){
    
    int j=n-1;
    while(j>0 && x[j]>x[j+1]){
        j--;
    }
    if(j>0){
        int k=n;
        while(x[j]>x[k]){
            k--;
        }
        swap(x[j],x[k]);
        int l=j+1;
        int r=n;
        while(l<r){
            swap(x[l],x[r]);
            l++;
            r--;
        }
    }else{
        kiemtra=0;
    }
}

int main(){

    int t;
    cin >> t;
    while(t--){
        kiemtra=1;
        cin >> n;
        Init();
        while(kiemtra){
            ketqua();
            sinh_hoan_vi();
        }
        cout << endl;
    }

    return 0;
}


/*
!phương pháp sinh

!Tìm từ phải qua trái hoán vị có chỉ số j đầu tiên thoả mãn aj < aj+1(hay j là chỉ số lớn nhất để aj < aj+1);
!Tìm ak là số nhỏ nhất còn lớn hơn aj trong các số ở bên phải aj;
!Đổi chỗ aj với ak
!Lật ngược đoạn từ aj+1 đến an.
*/