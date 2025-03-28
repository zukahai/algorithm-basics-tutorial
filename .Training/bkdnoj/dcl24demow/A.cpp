#include <bits/stdc++.h>

using namespace std;

string decToString(int n);

string maHoa(string s) {
    int count = 0;
    string ans = "";
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            ans += decToString(count + 1) + s[i - 1] ;
            count = 0;
        }
    }
    ans += decToString(count + 1) + s[s.size() - 1];
    return ans;
}

string decToString(int n) {
    string s = "";
    while (n > 0) {
        s = char(n % 10 + '0') + s;
        n /= 10;
    }
    return s;

}

int main() {
    string s;
    int n;
    cin >> n;
    cin.ignore();
    getline(cin, s);
    while (n --)
    {
        s = maHoa(s);
    }
    cout << s << endl;
    
}