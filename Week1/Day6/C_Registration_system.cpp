#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
    int n; cin >> n;
    map<string, int> db;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        
        if (db.find(name) == db.end()) {
            db[name] = 1;
            cout << "OK" << endl;
        } else {
            int suffix = db[name];
            string new_name = name + to_string(suffix);
            while (db.find(new_name) != db.end()) {
                suffix++;
                new_name = name + to_string(suffix);
            }
            db[name] = suffix + 1;
            db[new_name] = 1;
            cout << new_name << endl;
        }
    }
     
  return 0;
}