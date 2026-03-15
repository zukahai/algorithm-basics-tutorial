#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a = {1, 1, 2, 2, 3, 1, 1, 0};
    set<int> b = set<int>(a.begin(), a.end()); // Tạo tập hợp b từ mảng a
    // in ra phần tử chỉ số 1 trong tập hợp b
    a = vector<int>(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
}
