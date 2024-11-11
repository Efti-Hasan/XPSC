#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int x,y,z; cin>>x>>y>>z;
  float win = x +float(y*0.5);
  float loss = float(y*0.5+z);
  win+=4-(x+y+z);
  
  if(win>loss) cout <<"Yes" <<endl;
  else cout <<"No" <<endl;
  return 0;
}