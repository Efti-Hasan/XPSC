#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }

        long long totalCost = 0;

        // To keep track of already bought items
        unordered_set<int> boughtItems;

        for (int i = 0; i < N; i++) {
            long long costWithPromo = B[i];
            long long costWithNormal = LLONG_MAX;

            // Calculate the cost of buying other items at their normal price
            for (int j = 0; j < N; j++) {
                if (j != i && boughtItems.find(j) == boughtItems.end()) {
                    costWithNormal = min(costWithNormal, A[j]);
                }
            }

            // Choose the minimum cost option
            if (costWithPromo < costWithNormal) {
                totalCost += costWithPromo;
                boughtItems.insert(i); // Item bought at promo price
            } else {
                totalCost += costWithNormal;
                // Here we need to determine which item to mark as bought,
                // We can simply pick the first not bought item for simplicity
                for (int j = 0; j < N; j++) {
                    if (j != i && boughtItems.find(j) == boughtItems.end()) {
                        boughtItems.insert(j);
                        break;
                    }
                }
            }
        }

        cout << totalCost << endl;
    }

    return 0;
}
