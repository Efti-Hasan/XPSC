#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int a,b; cin>>a>>b;
  int mx = max(a,b);
  int n = mx;
  n--;

  int res = mx+n;
  if(a!=b) cout <<res;
  else cout <<a+b;
  return 0;
}