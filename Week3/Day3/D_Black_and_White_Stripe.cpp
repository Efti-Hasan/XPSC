#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) 
    {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        
        int current = 0;
        for (int i = 0; i < k; i++) 
        {
            if (s[i] == 'W') current++;
        }
   
        int min_recolor = current;
   
        int i = 1;
        while (i + k - 1 < n) 
        {
        
            if (s[i - 1] == 'W') current--;
                   
            if (s[i + k - 1] == 'W') current++;    
            min_recolor = min(min_recolor, current);
            i++;
        }

        cout << min_recolor << endl;
    }

    return 0;
}
