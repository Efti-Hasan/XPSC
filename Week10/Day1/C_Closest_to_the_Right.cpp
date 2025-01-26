#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
 
  int n,q; cin>>n>>q;
  vector<int>v(n);
  for(int i=0; i<n; i++) cin>>v[i];

  while(q--) {
    int l=0,r=n-1,s,ans=n,mid;
    cin>>s;
  
      while(l<=r){
         mid = (l+r)/2;
        if(s<=v[mid]) {
          ans = mid;
          r=mid-1;
        }
        else{
          l=mid+1;
        }
      }
    cout <<ans+1 <<endl;
  }
     
  return 0;
}