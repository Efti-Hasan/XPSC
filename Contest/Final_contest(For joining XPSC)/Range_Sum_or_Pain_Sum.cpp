#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
     cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<ll> a(n);  
    for (int i = 0; i < n; i++) 
    {
        a[i] = (i / 2) + 1;
    }

    vector<ll> pre(n); 
    pre[0] = a[0];
    for (int i = 1; i < n; i++) 
    {
        pre[i] = a[i] + pre[i - 1];
    }

    while (q--) 
    {
        int l, r;
        cin >>l>> r;
        l--;  
        r--;  

        ll sum;
        if (l == 0)  sum = pre[r];
        else sum = pre[r] - pre[l - 1];
        
        cout << sum <<endl; 
    }

    return 0;
}
