#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
 
  int t; cin>>t;
  while(t--)
  {
    int n,q; cin>>n>>q;
  vector<int>v(n),pre(n+1);
  for(int i=0; i<n; i++) cin>>v[i];
  
  sort(v.rbegin(),v.rend());
  for(int i=1; i<=n; i++){
    pre[i]= pre[i-1]+v[i-1];
  }

  while(q--){
    int k,ans=-1;
    cin>>k;
    auto it = lower_bound(pre.begin(),pre.end(),k);
    if(it!=pre.end())
    {
      ans = it-pre.begin();
    }
    cout <<ans <<endl;
  }
  }
  return 0;
}