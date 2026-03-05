#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool solve(int n, int k, vector<string>& arr) {
    unordered_set<int> s;
    vector<int> d(n);
    for (int i = 0; i < n; i++) d[i] = stoi(arr[i], nullptr, 2);
    int lim = 1 << n;
    for (int m = 1; m < lim; m++) {
        int orVal = 0;
        for (int i = 0; i < n; i++) {
            if (m & (1 << i)) orVal |= d[i];
        }
        s.insert(orVal);
    }
    for (int j = 1; j < (1 << k); j++) 
    {
        if (s.find(j) == s.end()) return false;
    }
    return true;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<string> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << (solve(n, k, a) ? "YES" : "NO") << endl;
    }
    return 0;
}
