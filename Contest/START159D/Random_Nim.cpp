#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;

long long modExp(long long b, long long e, long long mod) 
{
    long long r = 1;
    while (e>0) 
    {
        if (e% 2 == 1) r = (r * b) % mod;
        b = (b * b) % mod;
        e/= 2;
    }
    return r;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) 
    {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int sum = 0;
        for (int s : a)  sum ^= s;

        long long p = (sum != 0) ? (d + 1) : d;
        long long q = 2 * d;

        long long Q = modExp(q, N- 2, N);

        long long r = (p * Q) % N;
        cout << r << endl;
    }

    return 0;
}
