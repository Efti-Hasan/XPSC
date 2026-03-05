#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;  // Read the number of test cases

    while (T--) {
        int N;
        string S;
        cin >> N >> S;  // Read the size of the string and the string itself

        int countA = 0, countB = 0;

        // Count occurrences of 'a' and 'b'
        for (char ch : S) {
            if (ch == 'a') {
                countA++;
            } else {
                countB++;
            }
        }

        // Calculate the maximum length of a good subsequence
        int maxLength = 2 * min(countA, countB);  // Pairs of 'ab' and 'ba'
        if (countA != countB) {
            maxLength += 1;  // Add one more if there's an extra character
        }

        cout << maxLength << endl;  // Output the result for this test case
    }

    return 0;
}
