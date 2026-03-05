#include<bits/stdc++.h>
using namespace std;

int main() 
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
 
    int t;  cin >> t;
    while (t--) 
    {
        int n, x, y; cin >> n >> x >> y;  
        int t2 = n / 2;
        int t2E = t2 * y + (n % 2) * x;
        
        int t1e = n * x;
        int mx = max(t2E, t1e);
        
        cout << mx << endl;
    }
    return 0;
}
