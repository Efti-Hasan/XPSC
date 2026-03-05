#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i].first;
            a[i].second = i;
        }

        sort(a.begin(), a.end(), greater<>());
        vector<int> r(n);
        for (int i = 0; i < n; ++i) {
            r[a[i].second] = i + 1;
        }

        unordered_set<size_t> s;
        for (int i = 0; i < n; ++i) {
            size_t hash = 0;
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    hash = hash * 31 + (r[j] - (r[j] > r[i]));
                }
            }
            s.insert(hash);
        }

        cout << s.size() << endl;
    }

    return 0;
}
