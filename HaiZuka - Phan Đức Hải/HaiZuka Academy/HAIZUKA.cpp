#include <bits/stdc++.h>

using namespace std;

bool isSquare(int n) {
    int s = sqrt(n);
    return s * s == n;
}

long long toNum(string s) {
    if (s == "") return 0;
    long long res = 0;
    for (int i = 0; i < s.size(); i++) 
        res = res * 10 + (s[i] - '0');
    return res;
}

string toString(long long n) {
    string res = "";
    while (n > 0) {
        res = char(n % 10 + '0') + res;
        n /= 10;
    }
    return res;
}

long long get(long long n) {
    string s = toString(n);
    if (s[0] == '1' || s[0] == '4' || s[0] == '9') {
        while (isSquare(n % 10 + (n / 10) % 10) == false) 
            n--;
    } else {
        if (s[0] > '4') s[0] = '4';
        else s[0] = '1';
        for (int i = 1; i < (int)s.size() - 2; i++) {
            s[i] = '9';
        }
        s[s.size() - 2] = '9';
        s[s.size() - 1] = '7';
        n = toNum(s);
    }
    return n;
}
map<int, int> hashN;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("HAIZUKA.INP", "r", stdin);
    freopen("HAIZUKA.OUT", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // Viết lời giải ở bên dưới
    
    int index = 1;
    for (int i = 0; i <= 9; i++)
        for (int j = 0; j <= 9; j++)
            if (isSquare(i + j)) {
                hashN[10 * i + j] = index;
                index++;
            }

    long long n;
    cin >> n;
    if (n < 100) {
        cout << 0;
        return 0;
    }
    
    n = get(n);
    string s = toString(n);
    string p = s.substr(1, s.size() - 3);
    long long res = toNum(p) * 21 + hashN[toNum(s.substr(s.size() - 2, 2))];

    s = toString(n);
    s = s[0] + string(s.size() - 1, '0');

    n = toNum(s);
    while (n > 100) {
        n--;
        n = get(n);
        s = toString(n);
        string p = s.substr(1, s.size() - 3);
        res += toNum(p) * 21 + hashN[toNum(s.substr(s.size() - 2, 2))];
        s = s[0] + string(s.size() - 1, '0');
        n = toNum(s);
    }
    cout << res;

}
