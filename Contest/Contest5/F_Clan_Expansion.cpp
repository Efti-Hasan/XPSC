#include<bits/stdc++.h>
using namespace std;
#define ll long long

pair<int, int> solve(int n, const vector<int>& arr) 
{
    unordered_map<int, vector<int>> pos;
    for (int i = 0; i < n; ++i) pos[arr[i]].push_back(i);

    int mnT = INT_MAX, mn = -1;

    for (const auto& p : pos) {
        int clan = p.first;
        const vector<int>& idx = p.second;
        int mx = 0;

        for (int i = 0; i < n; i++) {
            int d = INT_MAX;
            for (int j : idx) d = min(d, abs(i - j));
            mx = max(mx, d);
        }

        if (mx < mnT || (mx == mnT && clan < mn)) {
            mnT = mx;
            mn = clan;
        }
    }

    return {mn, mnT};
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> arr(n);
        for (int& x : arr) cin >> x;
        auto r = solve(n, arr);
        cout << r.first << " " << r.second << endl;
    }
    return 0;
}
