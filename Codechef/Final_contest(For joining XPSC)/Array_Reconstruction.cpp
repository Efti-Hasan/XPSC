#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n; cin >> n;
        vector<int> arr(n - 2);
        ll cur_sum = 0;

        for (int i = 0; i < n - 2; i++) 
        {
            cin >> arr[i];
            cur_sum += arr[i];
        }

        ll total_sum;
        cin >> total_sum;

        ll miss_sum = total_sum - cur_sum;

        if (miss_sum < 0) cout << 0 << endl;

        else  cout << miss_sum + 1 << endl;
    
    }
    return 0;
}
