#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int n; cin>>n;
  vector<string>v(n);
  
  while (n--)
  {
    string s; cin>>s;
    bool flag = false;
    for(auto x : v)
    {
      if(x==s)
      {
        flag=true;
        break;
      }
    }
    if(flag) cout <<"YES" <<endl;
    else{
      cout<<"NO" <<endl;
      v.push_back(s);
    }
  }
  
     
  return 0;
}