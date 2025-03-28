#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> mp;
    mp[1] = 2;
    mp[2] = 3;
    mp[3] = 4;
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}