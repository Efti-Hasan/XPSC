#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
 
  int n,k; cin>>n>>k;
  vector<int>v(n);
  for(int i=0; i<n;i++) cin>>v[i];

   while(k--)
   {
    int l=0,r=n-1,mid;
    int s; cin>>s;
    bool flag = false;
     while(l<=r)
     {
    mid = (l+r)/2;
    if(s==v[mid]){
       flag =true;
       break;
    }
    else if(s>v[mid]){
        l = mid+1;
    }
    else{
        r = mid-1;
    }
  }
  if (flag) cout<<"YES" <<endl;
  else cout <<"NO" <<endl;

 }
     
  return 0;
}