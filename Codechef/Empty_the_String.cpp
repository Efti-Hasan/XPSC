#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n; cin >> n;
    string S; cin >> S;
    int cnt = 1; 

    for (int i = 1; i < n; ++i)  
    {
        if (S[i] == S[i - 1])  cnt++; 
    }

    cout << cnt << endl;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
