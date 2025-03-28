#include <bits/stdc++.h>

using namespace std;

string solve(int x, int y, int z) {
    int a = abs(x - z);
    int b = abs(y - z);
    if (a < b) {
        return "Cat A";
    } else if (b < a) {
        return "Cat B";
    } else {
        return "Mouse C";
    }
}

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << solve(x, y, z) << endl;
    }
    return 0;
}