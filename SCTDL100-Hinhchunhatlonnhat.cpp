#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack<int> st;
        long long res = -1e9;
        int i = 0;
        while(i < n)
        {
            if(st.empty() || a[i] >= a[st.top()])
            {
                st.push(i);
                ++i;
            }
            else
            {
                int idx = st.top(); // chi so o dinh stack
                st.pop();
                // tinh toan hcn tao boi cot hien tai, trong do cot hien tai 
                // dc coi la cot ngan nhat cua hcn do
                if(st.empty())
                {
                    res = max(res, i*a[idx]);
                }
                else
                {
                    res = max(res, a[idx] *(i-st.top()-1));
                }
            }

        }
        while(!st.empty())
        {
            int idx = st.top(); // chi so o dinh stack
            st.pop();
            // tinh toan hcn tao boi cot hien tai, trong do cot hien tai 
            // dc coi la cot ngan nhat cua hcn do
            if(st.empty())
            {
                res = max(res, i*a[idx]);
            }
            else
            {
                res = max(res, a[idx] *(i-st.top()-1));
            }
        }
        cout << res << endl;
    }
}