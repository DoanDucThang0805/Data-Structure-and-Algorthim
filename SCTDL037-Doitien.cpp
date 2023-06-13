#include<bits/stdc++.h>
using namespace std;

int x[10]={1,2,5,10,20,50,100,200,500,1000};
long N;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        cin >> N;
        int i=9;
        int count=0;
        for(i=9; i>=0; i--){
            if(N>=x[i]){
                N-=x[i];
                count++;
                i++;
            }
        }
        cout << count << endl;
    }
}