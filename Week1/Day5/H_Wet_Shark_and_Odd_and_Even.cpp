#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> odd, even;
    long long sum = 0;

    for (int i = 0; i < n; i++) 
    {
        int x; cin >> x;
        sum += x;

        if (x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }

    if (sum % 2 == 0)  cout << sum << endl;

    else 
    {
        sort(odd.begin(), odd.end());
        sum -= odd[0]; 
        cout << sum<< endl;
    }

    return 0;
}
