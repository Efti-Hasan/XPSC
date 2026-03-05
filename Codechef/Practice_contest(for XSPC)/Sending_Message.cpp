#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string w1, w2;
    
    while (cin >> w1 >> w2) 
    {
        int j = 0;
        for (char c : w1) 
        {
            if (c == w2[j]) j++;
            if (j == w2.size()) break;
        }
        if (j == w2.size()) cout << "Possible" << endl;
         else cout << "Impossible" << endl;
    
    }
    
    return 0;
}
