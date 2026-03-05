#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    ll total = 0;
    for(int i = 0; i < n; i++) total += arr[i];

    ll left = 0;

    for(int i = 0; i < n; i++) 
    {
        total -= arr[i];

        if(left == total) 
        {
            cout << left + arr[i] << " " << i + 1 << endl;
            return 0;
        }

        left += arr[i];
    }

    cout << "UNSTABLE" << endl;
    return 0;
}
