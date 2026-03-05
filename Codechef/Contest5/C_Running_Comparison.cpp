#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--) 
    {
        ll n; cin >> n;
        vector<ll>a(n),b(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) cin >> b[i];

        ll day= 0;
        for (ll i = 0; i < n; i++) 
        {
            if (b[i] <= 2 * a[i] && a[i] <= 2 * b[i]) 
            {
                day++;
            }
        }
        cout << day<< endl;
    }
    return 0;
}
