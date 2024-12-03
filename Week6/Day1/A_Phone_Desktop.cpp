#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n ; cin>>n;

    for (int i = 0; i<n; i++) 
    {
        int x,y; cin >>x>>y;

        int m = (y + 1) / 2;
        x -= (m * 5 * 3 - y * 2 * 2);
        x = max(x, 0);
        m += (x + 5 * 3 - 1) / (5 * 3);
        
        cout << m << endl;
    }

    return 0;
}
