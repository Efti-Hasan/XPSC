#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t; cin>>t;
  while(t--){
  int row=2,col; cin>>col;
  string a,b; cin>>a>>b;

    int c1=0;
  for (int i = 0; i < col; i++)
  {
    if(a[i]==b[i] ) c1++;

    else if(a[i]=='G' && b[i]=='B' || b[i]=='G' && a[i]=='B') c1++;
  }
  if(c1==a.size()) cout <<"YES" <<endl;
  else cout <<"NO" <<endl;
  
  }
    
  return 0;
}