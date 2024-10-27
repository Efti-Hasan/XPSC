#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int a,b,c; cin>>a>>b>>c;
  int number =0;
  for (int i = a; i <=b ; i++)
  {
    if(i%c==0)
    {
        number = i;
        break;
    }
    else number = -1;
  }
  cout <<number;
  
     
  return 0;
}