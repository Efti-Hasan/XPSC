#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int x,y,z; cin>>x>>y>>z;
  int a=(2*x+3*y);
  int b=(2*z+y);
  cout <<min(a,b) <<endl;
     
  return 0;
}