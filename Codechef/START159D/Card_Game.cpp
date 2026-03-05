#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;

    while (t--) 
    {
        int N, X; cin >> N >> X;

        int even = N / 2;
        int odd= N - even;

        int result;
        if (X % 2 == 0) result = even - 1;
        else result = odd - 1;
        cout << result << endl;
    }

    return 0;
}
