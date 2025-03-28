#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int index = -1; // Lưu vị trí cuối cùng mà số cuối cùng là 0 hoặc 5
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0' || s[i] == '5') {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << -1;
    } else {
        for (int i = 0; i <= index; i++) {
            cout << s[i];
        }
    }
}