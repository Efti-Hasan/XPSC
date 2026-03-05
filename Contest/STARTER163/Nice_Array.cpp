#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        
        long long sum = 0, total_gain = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            long long f = a[i] / k;
            long long c = (a[i] % k == 0) ? f : f + 1;

            sum += f;
            total_gain += (c - f);
        }

        if (sum == 0) {
            cout << "YES" << endl;
        } else {
            long long required_change = abs(sum);

            if (required_change <= total_gain && (total_gain - required_change) % 2 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
