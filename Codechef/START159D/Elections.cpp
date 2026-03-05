#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) 
    {
        int n, x; cin >> n >> x;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int win = 0;
        vector<int> v;

        for (int i = 0; i < n; i++) 
        {
            if (a[i] > b[i]) 
            {
                win++;
            } else {
            
                v.push_back(b[i] - a[i] + 1);
            }
        }
        sort(v.begin(), v.end());

        int win2 = (n / 2) + 1;
        for (int i = 0; i < v.size() && win < win2 && x > 0; i++) 
        {
            if (x >= v[i]) 
            {
                x -= v[i];
                win++; 
            } 
            else break;         
        }
        if (win >= win2)  cout << "YES" << endl; 
            else  cout << "NO" << endl;
    }

    return 0;
}
