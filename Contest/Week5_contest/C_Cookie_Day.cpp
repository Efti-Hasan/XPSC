#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t; cin>>t;
  while(t--)
  {
        int n, k;  cin >> n >> k;

        vector<long long> v(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        long long min_waste = -1;
        for (int i = 0; i < n; i++) 
        {
            if (v[i] >= k) 
            {
                long long waste = v[i] % k; 
                if (min_waste == -1 || waste < min_waste) 
                {
                    min_waste = waste;
                }
            }
        }

        cout << min_waste << endl;
    }

    return 0;
}
