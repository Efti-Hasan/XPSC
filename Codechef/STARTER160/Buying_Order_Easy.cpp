#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    
    while (t--) 
    {
        int n; cin >> n;
        
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        int t = 0;
        bool f1 = false;
        bool f2 = false;

        for (int i = 0; i < n; i++) 
        {
            if (v[i] == 1) 
            {
                if (f1) 
                {
                    t += 2;
                } 
                else 
                {
                    t += 1;
                }
                f1 = true; 
            } 
            else 
            {
                if (f2) 
                {
                    t += 2;
                } 
                else 
                {
                    t += 1;
                }
                f2 = true;
            }
        }

        cout << t << endl;
    }
    return 0;
}
