#include<bits/stdc++.h>

using namespace std;

void slove(int a[],int n)
{
	int tmp[n+1];
	int dau=0,cuoi = n-1;
	int gt=0;
	while(dau<cuoi)
		{
			tmp[gt] = a[cuoi];
			tmp[gt+1] = a[dau];
			gt+=2;
			dau++; cuoi--;
		}
	if(n%2!=0) tmp[gt] = a[dau];
	for(int i=0;i<n;i++)
	{
        cout << tmp[i] << ' ';
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n+1];
		for(int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		slove(a,n);
		cout << endl;
	}
}