#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t; cin>>t;
  while(t--)
  {
    string a,b; cin>>a>>b;
    int a1=a.size(),b1=b.size();
    char sa = a[a.size() - 1], sb = b[b.size() - 1];
    
    if(sa!=sb)
    {
        if(sa>sb) cout <<"<" <<endl;
        else cout <<">" <<endl;
    }
   else 
    {
        if(a1==b1) cout <<"=" <<endl;
        else if(sa=='S' && sb=='S')
        {
            if(a1>b1) cout <<"<"<<endl;
            else cout <<">" <<endl;
        }
        else if(sa='L' && sb=='L')
        {
            if(a1<b1) cout <<"<"<<endl;
            else cout <<">" <<endl;
        }
    }
  }
     
  return 0;
}