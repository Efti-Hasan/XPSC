#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--) 
    {
        int h, x, y;
        cin >> h >> x >> y;
        int rem = h - y;
        int a;
        if (rem > 0) a = ceil((double)rem / x) + 1;
        else  a = 1;
    
        int b = ceil((double)h / x);
        cout << min(a, b) << endl;
    }
    return 0;
}
