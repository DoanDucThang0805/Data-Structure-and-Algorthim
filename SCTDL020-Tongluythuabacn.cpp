#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> res;
int dem = 0, x[100];
int n, m; 
void Try(int i, int pos, int sum)
{
	for(int j = pos; j < res.size(); j++)
	{
		x[i] = res[j];
		sum += res[j];
		if(sum <= n)
		{
			if(sum == n)
			{
				dem++;
			}
			else
				Try(i+1, j+1, sum);
			//back track
			sum -= res[j];
		}
		
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{	
		cin >> n >> m;
		for(int i = 1; pow(i, m) <= n; i++)
		{
			res.push_back(pow(i, m));
		}
		dem = 0;
		Try(1, 0, 0);
		cout << dem << endl;
		res.clear();
	}	
}