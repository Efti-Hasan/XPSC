#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n;
    int books[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> books[i];
    }
    cin >> target;

    int result = -1;

    for (int i = 0; i < n; i++) {

        if (books[i] == target) {

            result = i;
            break;
        }
    }
    
    cout << result << endl;

    return 0;
}
