#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to check if placing the ball at position `start` and moving in `direction` destroys all walls
bool canDestroyAllWalls(vector<int> A, int start, int direction) {
    int N = A.size();
    int pos = start;

    while (pos >= 0 && pos < N) {
        if (A[pos] > 0) {
            A[pos]--;
            if (A[pos] == 0) { // Wall turns to ground
                pos += direction;
            } else { // Reverse direction if wall isn't destroyed
                direction = -direction;
                pos += direction;
            }
        } else {
            pos += direction; // Continue moving
        }
    }

    // Check if all walls are destroyed
    for (int h : A) {
        if (h > 0) return false;
    }
    return true;
}

// Function to count all valid ways to destroy all walls
int countWays(vector<int>& A) {
    int N = A.size();
    int ways = 0;

    // Try placing the ball on every empty ground
    for (int i = 0; i < N; i++) {
        if (A[i] == 0) {
            // Push the ball to the left and right
            if (canDestroyAllWalls(A, i, -1)) ways++;
            if (canDestroyAllWalls(A, i, 1)) ways++;
        }
    }

    return ways;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        cout << countWays(A) << endl;
    }

    return 0;
}
