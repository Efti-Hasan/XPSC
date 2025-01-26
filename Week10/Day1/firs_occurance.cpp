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

  while(q--){
    int l=0,r=n-1,ans=-1,mid,s;
    cin>>s;
     
    while(l<=r){
        mid = l + (r-l)/2;
        if(s==v[mid]){
            ans = mid;
            // r= mid-1;
            l = mid+1; //last occurace
        }
        else if(s>v[mid]){
           l = mid+1;
        }
        else{
          r = mid-1;
        }   
    }
    cout <<ans <<endl;
  }
     
  return 0;
}