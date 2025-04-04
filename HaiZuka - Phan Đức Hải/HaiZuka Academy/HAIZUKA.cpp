#include <bits/stdc++.h>

using namespace std;

int convert(string s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
        sum = sum * 10 + (s[i] - '0');
    return sum;
}

int main() {
    // Nhập xuất nhanh
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // Đọc file
    #ifndef ONLINE_JUDGE
    freopen("HAIZUKA.INP", "r", stdin);
    freopen("HAIZUKA.OUT", "w", stdout);
    #endif

    // Chương trình chính
    string s;
    getline(cin, s);
    s = s + ' ';
    string p = "";
    long long sum = 0;
    int ch = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            p = p + s[i];
        } else {
            sum += convert(p) * ch;
            p = "";
            if (s[i] == '+')
                ch = 1;
            else
                ch = -1;

        }
    }
    cout << sum;
   
}