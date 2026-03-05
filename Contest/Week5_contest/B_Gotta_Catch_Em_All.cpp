#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t;cin>>t;
  while(t--)
  {
    int n,x,y; cin>>n>>x>>y;
  vector<int>v(n);
  for(int i=0; i<n; i++) cin>>v[i];

  int sum=0;
  for(int i=0; i<n; i++)
  {
    if(x*v[i]<y)
    {
        sum+= x* v[i];
    }
    else
    {
        sum+=y;
    }
  }
  cout <<sum <<endl;
  
  }
     
  return 0;
}