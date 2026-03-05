#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

   int t; cin >> t;

    while (t--) 
    {
        int n, k, p; cin >> n >> k >> p;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        int vh = k + v[0];
        int vh2 = p;
        for (int i = 1; i < n; ++i) {
            vh2 += v[i];
        }

        if (vh > vh2) {
            cout << "Ved" << endl;
        } 
        else if (vh2 > vh) {
            cout << "Varun" << endl;
        } 
        else {
            cout << "Equal" << endl;
        }
    }


    return 0;
}
