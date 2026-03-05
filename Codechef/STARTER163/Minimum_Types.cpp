#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    for(int tc = 0; tc < t; tc++) {
        int n, m; 
        cin >> n >> m;
        vector<int> a(n);
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for(int i = 0; i < n; i++) {
            int x; 
            cin >> x;
            a[i] *= x;
        }
        
        sort(a.begin(), a.end(), greater<int>());
        
        int cnt = 0, rem = m;
        
        for(int i = 0; i < n; i++) {
            if(rem > 0) {
                rem -= a[i];
                cnt++;
            } else {
                break;
            }
        }
        
        if(rem > 0) {
            cout << -1 << endl;
        } else {
            cout << cnt << endl;
        }
    }
    return 0;
}
