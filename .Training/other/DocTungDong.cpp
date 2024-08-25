#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a;
    string line;
    while (true) {
        getline(cin, line); // Đọc cả dòng
        if (line.empty()) break; // Dừng khi dòng nhập trống
        stringstream ss(line);
        int x = stoi(line); // Chuyển dòng thành số nguyên
        a.push_back(x);
    }

    // In ra mảng a
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
}
