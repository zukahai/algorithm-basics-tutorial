#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v(3);

    set< vector<int> > s2;
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    s2.insert(v);

    v[0] = 1;
    v[1] = 2;
    v[2] = 4;
    s2.insert(v);

    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    s2.insert(v);

    for (auto x : s2) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }

    
}