#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
 
  int t; cin>>t;
  while(t--)
  {
    int n; cin>>n;
    vector<ll>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    ll g1=0,g2=0;
     for(int i=0; i<n; i+=2){
        g1 = __gcd(g1,v[i]);
     }
     for(int i=1; i<n; i+=2){
        g2 = __gcd(g2,v[i]);
     }

     ll ans=0;
     bool ok = true;
     for(int i=1; i<n; i+=2){
        if(v[i]%g1==0){
            ok = false; 
        }
     }
     if(ok) ans=g1;

     else{
        ok=true;
        for(int i=0; i<n; i+=2){
        if(v[i]%g2==0){
            ok = false; 
        }
        }
        if(ok){
            ans= g2;
        }
     }
     cout <<ans <<endl;
  }
     
  return 0;
}