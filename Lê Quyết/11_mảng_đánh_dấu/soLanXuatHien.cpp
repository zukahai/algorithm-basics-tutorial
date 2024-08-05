#include <iostream>
#include <map>

using namespace std;

int a[1000000];

int main() {
    map<long long, long long> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        mp[a[i]]++; // mp[a[i]] = mp[a[i]] + 1;
    }

    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    
}
// (1, 10), (2, 10), (3, 10)
/*
Mp:
mp[a[i]]++
mp[k]: số lần xuất hiện của số k trong mảng

*/