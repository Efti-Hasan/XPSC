#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (m <= n - 1) {
            cout << "yes" << endl;
        }
         else {
            cout << "no" << endl;
        }
    }
    return 0;
}
