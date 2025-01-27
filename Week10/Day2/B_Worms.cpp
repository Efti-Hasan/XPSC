#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
 
  int n; cin>>n;
  vector<int>v(n),pre(n+1);
  for(int i=0; i<n; i++) cin>>v[i];
//   sort(v.begin(),v.end());  

  for(int i=1;i<=n; i++){
    pre[i] = pre[i-1] + v[i-1];
  }

  int q; cin>>q;
  while(q--){
    int j; cin>>j;
    auto it = lower_bound(pre.begin(),pre.end(),j);
    cout <<it-pre.begin() <<'\n';
  }
     
  return 0;
}