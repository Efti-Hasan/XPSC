#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
    int n; cin >> n;
    map<string, int> chats;
    int time = 0;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        chats[name] = ++time;
    }

    vector<pair<int, string>> sorted_chats;
    for (const auto &entry : chats) {
        sorted_chats.push_back({entry.second, entry.first});
    }

    sort(sorted_chats.rbegin(), sorted_chats.rend());

    for (const auto &entry : sorted_chats) {
        cout << entry.second << endl;
    }
     
  return 0;
}