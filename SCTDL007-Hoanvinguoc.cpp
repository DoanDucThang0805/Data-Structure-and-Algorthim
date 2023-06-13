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
        v.push_back(x[i]);
    }

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
        int size=v.size();
        while(size>0){
            for(int t=size-n+1; t<=size; t++){
                cout << v[t-1];
            }
            cout << ' ';
            size-=n;
        }
        cout << endl;
    }

    return 0;
}


/* làm theo quay lui 

!#include<bits/stdc++.h>
!using namespace std;

!int n;
!bool use[1000] = {false};
!int a[1000];

!void show(){
!    for(int i = 1; i <= n; i++){
!        cout << a[i];
!    }
!    cout << " ";
!}

!void backtrack(int pos){
!    if(pos == n + 1){
!        show();
!        return;
!    }
!    for(int i = n; i > 0; i--){
!        if(!use[i]){
!            a[pos] = i;
!            use[i] = true;
!            backtrack(pos + 1);
!            use[i] = false;
!        }
!    }
!}

!int main(){
!    int t;
!    cin >> t;
!    while(t--){
!        cin >> n;
!        backtrack(1);
!        cout << endl;
!    }
!    return 0;
!}


*/