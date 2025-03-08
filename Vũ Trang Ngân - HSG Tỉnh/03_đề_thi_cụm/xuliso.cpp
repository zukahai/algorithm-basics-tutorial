#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    s = s + "N";
    long long temp = 0, sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            temp = temp * 10 + s[i] - '0';
        } else {
            sum = sum + temp;
            temp = 0;
        }
    }
    cout << sum;
}

// Nhập vào 2 số nguyên trên 1 dòng: Ví dụ: 123 567