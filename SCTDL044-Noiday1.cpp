#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int n, a[1001];
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		priority_queue<long long, vector<long long>, greater<long long> > q;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			q.push(a[i]);
		}
		long long ans = 0;
		while(q.size() > 1)
		{
			long long top1 = q.top();
			q.pop();
			long long top2 = q.top();
			q.pop();
			ans = (ans + (top1 + top2))%MOD;
			q.push(top1 + top2);
		}
		cout << ans << endl;
	}
}