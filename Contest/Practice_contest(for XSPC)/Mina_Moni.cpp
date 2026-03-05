#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> coins(N);
        int total_sum = 0;

        for (int i = 0; i < N; i++) {
            cin >> coins[i];
            total_sum += coins[i];
        }

        int target = total_sum / 2;
        vector<bool> dp(target + 1, false);
        dp[0] = true;

        for (int coin : coins) {
            for (int j = target; j >= coin; j--) {
                dp[j] = dp[j] || dp[j - coin];
            }
        }

        for (int i = target; i >= 0; i--) {
            if (dp[i]) {
                cout << total_sum - 2 * i << endl;
                break;
            }
        }
    }

    return 0;
}
