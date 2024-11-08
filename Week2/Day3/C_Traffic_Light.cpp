#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;

    while (t--) 
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        if (c == 'g') 
        {
            cout << 0 << endl;
            continue;
        }

        s += s;

        int wait = 0;
        int green = -1;
        for (int i = s.size(); i >= 0; i--) 
        {
            if (s[i] == 'g') 
            {
                green = i;
            } 
            else if (s[i] == c && green != -1) 
            {
                wait = max(wait, green - i);
            }
        }

        cout << wait << endl;
    }

    return 0;
}
