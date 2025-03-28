#include <bits/stdc++.h>

using namespace std;

int main() {
    map <long long, long long> mp;
    mp[-9] = 10;
    mp[1000000000] = 10;
    mp[123456789123456789] = 15;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}

/*
i, a[i]
a[10000000]

map<key, value> m;
key, value

(-9, 10)
(1000000000, 10)
(123456789123456789, 15)


*/