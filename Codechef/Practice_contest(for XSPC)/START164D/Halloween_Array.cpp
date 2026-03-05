#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) 
    {
        int n;
        ll l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_set<int> st;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (st.find(a[i]) != st.end()) {
                flag = true;
                break;
            }
            st.insert(a[i]);
        }

        if (flag) {
            cout << "YES" << endl;
            continue;
        }

        ll p = 1;
        bool range = false;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) 
            {
                ll xorValue = a[i] ^ a[j];
                p *= xorValue;

                if (p >= r) {
                    cout << "NO" << endl;
                    range = false;
                    break;
                }
            }
            if (!range) {
                break;
            }
        }

        if (p >= l && p < r) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
