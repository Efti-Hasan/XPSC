#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) 
    {
        int n, m; cin >>n>>m;

        vector<int>a(n);
        for (int i =0; i<n;i++) cin >> a[i];

        vector<int> b(m);
        for (int i = 0; i < m; i++)  cin >> b[i];

        int cnt = 0;
        for (int i = 0; i < m; ++i) 
        {
            int t = b[i]-1;
            if (a[t] > 0) 
            {
                a[t]--;
            } 
            else
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
