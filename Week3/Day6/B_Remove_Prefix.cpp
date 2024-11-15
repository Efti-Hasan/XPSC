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
  vector<int>v(n);
  for(int i=0; i<n; i++) cin>>v[i];
  set<int>s;
  int l=0;
  for(int i=n-1; i>=0; i--) 
  {
    if(s.count(v[i])) break;

    s.insert(v[i]);
    l++;
  }
  cout <<n-l <<endl;
  }
     
  return 0;
}