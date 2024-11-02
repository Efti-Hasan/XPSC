#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t;cin>>t;
  while(t--)
  {
    int n; cin>>n;
    string s;cin>>s;
    set<char>st(s.begin(),s.end());
    vector<char>v(st.begin(),st.end());
    int sz = v.size();
    
        map<char,char>mp;
        for(int i=0; i<sz; i++)
        {
            mp[v[i]]= v[sz-1-i]; 
        }
        string newS;
    for(char x : s) 
    {
        newS.push_back(mp[x]);
    }
    cout <<newS <<endl;
        
    }
  return 0;
}