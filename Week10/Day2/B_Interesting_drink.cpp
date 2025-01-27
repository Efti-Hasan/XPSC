#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
 
  int n; cin>>n;
  vector<int>v(n);
  for(int i=0; i<n; i++) cin>>v[i];
  sort(v.begin(),v.end());  

  int q; cin>>q;
  while(q--)
  {
    int k; cin>>k;
   auto it = upper_bound(v.begin(),v.end(),k);
   cout << it - v.begin() <<endl;
  }   
  return 0;
}