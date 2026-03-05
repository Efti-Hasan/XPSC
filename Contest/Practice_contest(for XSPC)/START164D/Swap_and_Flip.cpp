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
	    int n; string st,t;
	    cin>>n>>st>>t;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(st[i]!=t[i])
	        {
	            count++;
	        }
	    }
	    if(count%2==0) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}