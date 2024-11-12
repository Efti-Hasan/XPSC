#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t; cin>>t;
  while(t--)
  {
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n; i++) cin>>v[i];

    int l=0,r=1;
    while (r<v.size())
    {
         if(v[l]+v[r]==v[0])
            {
                v[r]=v[0];
                l++,r++;
            }
        else
        {
            break;
        }
    }
    bool found = true;
    for(auto val : v) 
    {
        if(val!=v[0])
        {
            found =false;
        }
    }
    if(found) cout <<"YES" <<endl;
    else cout <<"NO" <<endl;
    
  }
     
  return 0;
}