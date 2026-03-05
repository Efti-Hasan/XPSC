#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t; cin>>t;
  while(t--)
  {
    int n; cin>>n;
  int cnt1=0;
  int cnt2=0;
  for(int i=1; i<=n; i++)
  {
   if(n%i==0)
   {
    if(i%2==0) cnt1++;
    else cnt2++;
    // cout <<i <<" ";
   }
  }
//   cout <<cnt1 <<" " <<cnt2;
  if(cnt1>cnt2) cout<< 1 <<endl;
  else if(cnt1==cnt2) cout <<0 <<endl;
  else cout <<-1 <<endl;
  }

  
  return 0;
}