#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;

    while (t--) 
    {
        int n; cin >>n; 

        vector<int> A(n);
        int max_subarray_sum = 0;
        int count_negatives = 0;

        for (int i = 0; i <n; i++) 
        {
            cin >> A[i];
            if (A[i] < 0) {
                count_negatives++;
            }
        }
    
        bool all_negative = true;
        for (int i = 0; i <n; i++) {
            if (A[i] > 0) {
                all_negative = false;
                break;
            }
        }

        if (all_negative) {
            cout << 0 << endl; 
        } else {
            
            cout << count_negatives << endl;
        }
    }

    return 0;
}
