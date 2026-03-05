#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> v[i];
    }
    // sort(v.begin(),v.end());
    vector<int> a(n);
    a[0] = (v[0] + v[1] - v[n - 2]) / 2;
    a[1] = v[0] - a[0];

    for (int i = 1; i < n - 1; i++) {
        a[i + 1] = v[i] - a[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
