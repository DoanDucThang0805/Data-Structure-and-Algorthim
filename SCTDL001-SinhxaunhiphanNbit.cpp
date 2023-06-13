#include<bits/stdc++.h>
using namespace std;

int n;
int x[100];
int kiemtra;

void Init(){

    for(int i=1; i<=n; i++){
        x[i]=0;
    }
    
}

void ketqua(){

    for(int i=1; i<=n; i++){
        cout << x[i] << ' ';
    }
    cout << endl;

}

void next_bit_string(){

    int i=n;
    while(i>=1 && x[i]==1){
        x[i]=0;
        --i;
    }
    if(i>0){
        x[i]=1;
    }else{
        kiemtra=0;
    }

}

int main(){

    int t; 
    cin >> t;
    while(t--){
        cin >> n;
        kiemtra = 1;
        Init();
        while(kiemtra){
            ketqua();
            next_bit_string();
        }
    }

    return 0;
}

//! Thuat toan sinh
/*
!  < Thiet lap cau hinh dau tien >
!  Lap cho den khi xuat hien cau hinh cuoi cung 
!   < Dua ra cau hinh hien tai >
!   < Dua ra cau hinh sinh ke tiep >
*/


//! làm theo đệ quy quay lui
/*
#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000];
void result(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << ' ';
}
void Try(int pos){
    if(pos == n + 1){
        result();
        return;
    }
    for(int i = 0; i <= 1; i++){
        a[pos] = i;
        Try(pos + 1);
    }
}

int main(){
    cin >> n;
    Try(1);
}
*/