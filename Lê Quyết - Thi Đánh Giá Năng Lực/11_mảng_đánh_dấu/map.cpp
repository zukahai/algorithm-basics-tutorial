#include <iostream>
#include <map>

using namespace std;

int main() {
    map<long long, long long> mp;
    mp[0] = 100;
    mp[4] = 1000;
    mp[-2] = 10000;
    mp[10000000000000000] = 123;

    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << "Chi so la: " << it->first << endl;
        cout << "Gia tri la: " << it->second << endl;
        cout << endl;
    }
    
}
// (0, 100), (-2, 10000), (4, 1000)
// mp[k]: số lần xuất hiện của k trong mảng