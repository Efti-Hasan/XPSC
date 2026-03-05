#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--)
     {
        int n, k; cin >> n >> k;

        bool ok = false;

        for (int i = 0; i <= n; i++) 
        {
            for (int j = 0; j <= n - i; j++) 
            {
                int s = 10 * i + 11 * j + 12 * (n - i - j);
                if (s == k) 
                {
                    ok = true;
                    break;
                }
            }
            if (ok) break;
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
