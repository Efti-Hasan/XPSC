#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t; cin>>t;
  while(t--)
  {
  int n; cin>>n;
  vector<int>v(n);
  for(int i=0;i<n; i++) cin>>v[i];

  priority_queue<int>pq;
  long long int total=0;
  for(int i=0; i<n; i++)
  {
    if(v[i]>0) pq.push(v[i]);
    else if(v[i]==0)
    {
        if(!pq.empty())
        {
            total+=pq.top();
            pq.pop();
        }
    }
  }
  cout <<total <<endl;
  }  
  return 0;
}