#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) 
    {
        int N, X;
        cin >> N >> X;

        long long Coin = 0;
        
        for (int i = N; i > N - X; i--) Coin += pow(2, i); 
        for (int i = 1; i <= N - X; i++)  Coin -= pow(2, i); 

        cout << Coin << endl;
    }
     
  return 0;
}