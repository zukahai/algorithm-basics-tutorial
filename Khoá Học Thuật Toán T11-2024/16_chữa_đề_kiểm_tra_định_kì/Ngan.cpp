#include <bits/stdc++.h>

using namespace std;

int main() {
    map <int, int> mp;
    mp[1] = 1;
    mp[4] = 1;

    for (map<int, int> :: iterator x = mp.begin(); x != mp.end(); x++) {
        cout << x->first << " " << x->second << endl;
    }
}