#include<bits/stdc++.h>
using namespace std;

string reverse(string s) {
    string res = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        res += s[i];
    }
    return res;
}

string generatePalindrome(string s, int type) {
    if (type == 1)
        return s + reverse(s);
    return s + reverse(s.substr(0, s.length() - 1));
}

bool isCompare(string s, string p) {
    while (s.length() < p.length()) 
        s = "0" + s;
    while (s.length() > p.length()) 
        p = "0" + p;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != p[i]) {
            return s[i] > p[i];
        }
    }
    return true;
}

string sum(string s, string p) {
    while (s.length() < p.length())
        s = "0" + s;
    while (s.length() > p.length()) 
        p = "0" + p;
    string res = "";
    int n = s.length();
    int carry = 0;
    for (int i = n - 1; i >= 0; i--) {
        int sum = (s[i] - '0') + (p[i] - '0') + carry;
        res = char(sum % 10 + '0') + res;
        carry = sum / 10;
    }
    if (carry > 0) 
        res = char(carry + '0') + res;
    return res;
}

string firstPalindrome(string s) {
    int n = s.length();
    string p = s.substr(0, n / 2);
    int type = 1;
    if (n % 2 != 0) {
        type = 2;
        p = s.substr(0, n / 2 + 1);
    }

    string palindrome = generatePalindrome(p, type);
    if (isCompare(palindrome, s)) {
        return palindrome;
    } else {
        return generatePalindrome(sum(p, "1"), type);
    }
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string s;
    getline(cin, s);
    cout << firstPalindrome(s);
}
