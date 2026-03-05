#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
 
  int n, m; cin >> n >> m;

    if (m >= (n + 1) / 2) {
        cout << "NEWBIE" << endl;
    } 
    else {
        cout << "PRO" << endl;
    }
     
  return 0;
}