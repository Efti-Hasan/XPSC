#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
 int t; cin>>t;
 while(t--)
 {
   int n,k;cin>>n>>k;
  string s; cin>>s;
  int l=0,r=0,cnt=0,ans=INT_MAX;
  while(r<n)
  {
      if(s[r]=='B')
      {
         cnt++;
         r+=k;
      }

    else r++;   
  }
  cout <<cnt <<endl;

 }
     
  return 0;
}