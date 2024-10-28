#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
    string s; cin >> s;
    
    bool p[26] ;
    memset(p,false,sizeof(false));

    for (char c : s) 
    {
        p[c - 'a'] = true;
    }

    for (int i = 0; i < 26; i++) 
    {
        if (!p[i]) 
        {
            cout << char(i + 'a') << endl;
           return 0;
        }
    }
  
    cout << "None" << endl;
  return 0;
}