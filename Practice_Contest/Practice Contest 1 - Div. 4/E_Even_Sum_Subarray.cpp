#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
    int T; cin >> T;
    while (T--) 
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        int sum = 0,maxLen = 0,firstEvenIndex = -1,firstOddIndex = -1;
        for (int i = 0; i < N; i++) 
        {
            sum += A[i];

            if (sum % 2 == 0) 
            {
                maxLen = i + 1;
                if (firstEvenIndex == -1) firstEvenIndex = i;
            } 
            else 
            {
                if (firstOddIndex == -1) firstOddIndex = i;
                if (firstOddIndex != -1) maxLen = max(maxLen, i-firstOddIndex);
            }
        }
        cout << maxLen << endl;
    }
     
  return 0;
}