#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int n; cin>>n;
  long long k; cin>>k;
  vector<int>v(n);
  for(int i=0; i<n;i++) cin>>v[i];

  long long sum = 0,ans=0;
  int l=0,r=0;
  while(r<n)
  {
   sum+=v[r];
   if(sum<=k)
   {
     ans+=(r-l+1);
   }
   else
   {
    while(sum>k && l<=r)
    {  
        sum-=v[l];
        l++;
    }
    if(sum<=k)
        {
            ans+=(r-l+1);
        }
   }
    r++;
  }
  cout<<ans <<endl;
     
  return 0;
}