#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t; cin>>t;
  while(t--)
  {
    int x; cin>>x;
    int back = 100-x;
    int f = (back/10)*10;
    cout <<f <<endl;
  }
     
  return 0;
}