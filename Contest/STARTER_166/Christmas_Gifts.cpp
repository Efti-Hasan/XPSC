#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;

    while (t--) {
        int h, l, w;
        cin >> h >> l >> w;

        int sa = 2 * (h * l + l * w + w * h);
        int mg = 1000 / sa;

        cout << mg << endl;
    }
    return 0;
}
