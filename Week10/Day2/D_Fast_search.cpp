#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
 
  int n; cin>>n;
  vector<ll>v(n);
  for(int i=0; i<n; i++) cin>>v[i];
  int q; cin>>q;
  sort(v.begin(),v.end());

  while(q--){
    int l,r; cin>>l>>r;
    auto left = lower_bound(v.begin(),v.end(),l);
    auto right = upper_bound(v.begin(),v.end(),r);

    cout <<right-left <<" ";
  }
     
  return 0;
}