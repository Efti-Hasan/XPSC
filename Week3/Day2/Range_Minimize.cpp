#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int T; cin >> T;
    // while (T--) 
    // {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) cin >> A[i];
    
        sort(A.begin(), A.end());
          for (int i = 0; i < N; ++i) cout<< A[i] <<" ";
        int min_range = INT_MAX;
        if (N >= 3) min_range = min(min_range, A[N-1] - A[2]);
      cout <<endl<<A[N-1]; 
        if (N >= 3) min_range = min(min_range, A[N-2] - A[1]);
        if (N >= 3) min_range = min(min_range, A[N-3] - A[0]);  
        cout <<endl << min_range << '\n';
        // cout << min_range << '\n';
    // }

    return 0;
}
