#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;

    while (T--) 
    {
        int N; cin >> N;

        if (N % 2 == 0) 
        {
            cout << -1 << endl;
        } 
        else {
            for (int i = 1; i <= N; i++) 
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
