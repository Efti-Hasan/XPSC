#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;  cin >> t;
    
    while (t--) 
    {
        int n, m; cin >> n >> m;
        string s,t; cin >> s >> t;
        
        int a_s = 0, b_s = 0;
        int a_t = 0, b_t = 0;
        
        for (auto c : s) 
        {
            if (c == 'a') a_s++;
            else b_s++;
        }
        
        for (auto c : t) 
        {
            if (c == 'a') a_t++;
            else b_t++;
        }
        
        if (b_s != b_t) 
        {
            cout << "NO\n";
        } 
        else 
        {
            if (a_s <= a_t && (a_t - a_s) % 2 == 0) 
            {
                cout << "Yes\n";
            }
             else 
            {
                cout << "No\n";
            }
        }
    }
    
    return 0;
}
