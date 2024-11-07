#include<bits/stdc++.h>
using namespace std;

int get_initial(int f, int u, int d) 
{
    return (f + (d - u) + 10) % 10;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
   int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        
        vector<int> final(n);
        for (int i = 0; i < n; i++) cin >> final[i];
        
        vector<int> initial(n);
        
        for (int i = 0; i < n; i++) 
        {
            int m;
            string moves;
            cin >> m >> moves;
            
            int u = 0, d = 0;
            for (char move : moves) 
            {
                if (move == 'U') u++;
                else if (move == 'D') d++;
            }
            
            initial[i] = get_initial(final[i], u, d);
        }
        
        for (int i = 0; i < n; i++) {
            cout << initial[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
