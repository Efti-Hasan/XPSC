#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int n,x; cin>>n>>x;
  deque<long long>dq,res;
  for(int i=0; i<n; i++)
  {
    long long num; cin >> num;
    dq.push_back(num);
  }

  for(auto p : dq) 
  {
    if(p!=x)
    {
        res.push_back(p);
    }
  }
  for(int i=0; i<res.size(); i++) 
  {
    cout << res[i] <<" ";
  }
  return 0;
}