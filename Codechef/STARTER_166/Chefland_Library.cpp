#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        map<int, int> mp;
        for (int i = 0; i < n; i++) 
        {
            int d = a[i];
            int p = i + 1;
            mp[d] = max(mp[d], p);
        }

        int tp = 0;
        for (auto p : mp) 
        {
            tp += p.second;
        }
        cout << tp << endl;
    }

    return 0;
}
