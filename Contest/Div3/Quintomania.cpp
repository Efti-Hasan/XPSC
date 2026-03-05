#include<bits/stdc++.h>
using namespace std;
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
        vector<int> notes(n);
        for (int i = 0; i < n; i++) cin >> notes[i];
        
        bool Perfect = true;
        for (int i = 1; i < n; i++) 
        {
            int interval = abs(notes[i] - notes[i-1]);
            if (interval != 5 && interval != 7) 
            {
                Perfect = false;
                break;
            }
        }
      if(Perfect) cout <<"YES" <<endl;
      else cout <<"NO" <<endl;
    }
    return 0;
}
