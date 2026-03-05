#include <bits/stdc++.h>
#define ll int long long 
using namespace std;

int main() 
{
    ll n;
    cin >> n; 
    vector<ll> ball(n); 
    for (int i = 0; i < n; i++)
    {
        cin >> ball[i]; 
    }

    bool used[1001];
    memset(used, false, sizeof(used));
    
    ll totalBall = 0; 

    for (int i = 0; i < n; i++) 
    {
        int count = ball[i]; 
             
        while (count > 0 && count <= 1000 && used[count]) 
        {
            count--; 
        } 
        
        if (count > 0 && count <= 1000) 
        {
            used[count] = true; 
            totalBall += count; 
        }
    }

    cout << totalBall << endl;
    return 0;
}
