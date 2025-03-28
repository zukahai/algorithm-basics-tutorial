#include <bits/stdc++.h>

using namespace std;

int main() {
    map <long long, int> b;
    b[3] = 5;
    b[4] = 6;
    b[-4] = 7;
    b[-100] = 8;
    b[1000000000000000000] = 9;

    for (auto x : b) {
        cout << x.first << " " << x.second << endl;
    }
}

/*

b[k]: số lần xuất hiện của k trong mảng a

mảng, vector: i, a[i]
map: key, value

- Không thể truy cập b[k] nếu k quá lớn (10^18) hoặc k < 0
- Duyệt mảng sẽ bị quá thời gian

 */