#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(const vector<int>& p, int k) 
{
    int n = p.size(); 
    int sum = 0;
    for (int x : p) {
        sum += x;
    }
    if (sum % k != 0) {
        return false;
    }
    int sum1 = sum / k;
    int sum2 = 0;
    int count = 0;
    
    for (int x : p) {
        sum2 += x;
        if (sum2 == sum1) {
            sum2 = 0;
            count++;
        }
    }
    return (count == k);
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
        {
            v[i] = i + 1;
        }

        for (int k = n; k > 0; k--) {
            if (solve(v, k)) 
            {
                for (int x : v) 
                {
                    cout << x << " ";
                }
                cout << endl;
                break;
            }
        }
    }
    return 0;
}
