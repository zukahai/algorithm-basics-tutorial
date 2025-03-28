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
        mp[a[i]] = 10;
    }
    
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " ";
    }
}
// (1, 10), (2, 10), (3, 10)