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
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        unordered_map<int, int> freq;
        vector<int> results;

        for (int i = 0; i < N; i++) {
            freq[A[i]]++;  // Count occurrences of each element
            
            // Calculate the current size of the array
            int size = 0;
            for (const auto& p : freq) {
                size += (p.second % 2);  // Only odd occurrences remain
            }
            results.push_back(size);
        }

        for (int i = 0; i < N; i++) {
            cout << results[i];
            if (i < N - 1) cout << " "; // Print space between results
        }
        cout << endl;
    }

    return 0;
}
