#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& p, int n, int k) 
{
    for (int i = 0; i < n; ++i) 
    {
        if (p[i] % k == (i + 1) % k) return false;
    }
    return true;
}

vector<int> fun(int n, int k) 
{
    vector<int> p(n);
    for (int i = 0; i < n; ++i) p[i] = i + 1;
    
    for (int i = 1; i < n; ++i) 
    {
        vector<int> r(n);
        for (int j = 0; j < n; ++j) r[j] = p[(j + i) % n];
        if (check(r, n, k)) return r;
    }
    return {};
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> res = fun(n, k);
        if (res.empty()) cout << -1 << '\n';
        else {
            for (int x : res) cout << x << ' ';
            cout << endl;
        }
    }
    return 0;
}
