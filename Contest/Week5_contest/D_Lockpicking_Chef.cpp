#include<bits/stdc++.h>
using namespace std;

int cyclicDistance(char a, char b) 
{
    int d1 = abs(a - b);
    int d2 = 10 - d1;
    return min(d1, d2);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t; cin>>t;
  while(t--)
  {
        int n, m; cin >> n >> m;
        string s, k; cin >> s >> k;

        int min_moves = INT_MAX;
        for (int i = 0; i <= n - m; i++) 
        {
            int moves = 0;
            for (int j = 0; j < m; j++) 
            {
                moves += cyclicDistance(s[i + j],k[j]);
            }
            min_moves = min(min_moves, moves);
        }

        cout << min_moves << endl;
    }

    return 0;
}
