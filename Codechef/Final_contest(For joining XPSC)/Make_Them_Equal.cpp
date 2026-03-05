#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--) 
    {
        int N, k;
        cin >> N >> k;
        
        string a, b;
        cin >> a >> b;
        
        int count = 0;
        
        for(int i = 0; i < N; i++) 
        {
            if(a[i] != b[i]) count++;
        }
        
        if(count <= k)  cout << "YES" << endl;

        else  cout << "NO" << endl;
    }
    
    return 0;
}
