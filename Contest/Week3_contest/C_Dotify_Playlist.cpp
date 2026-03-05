#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; 
    while (t--) 
    {
        int n, k, l; cin >> n >> k >> l;

        vector<int> v;
        for (int i = 0; i < n; i++) 
        {
            int m, li;
            cin >> m >> li;
            if (li == l) 
            {
                v.push_back(m);
            }
        }
        
        if (v.size() < k) 
        {
            cout << -1 << endl;
            continue;
        }
        
        sort(v.rbegin(), v.rend());

        int length = 0;
        for (int i = 0; i < k; i++) 
        {
            length += v[i];
        }
        cout << length << endl;
    }
    return 0;
}
