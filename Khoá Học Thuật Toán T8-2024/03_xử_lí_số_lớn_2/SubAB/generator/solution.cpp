#include<bits/stdc++.h>
using namespace std;

int compare(string a, string b) {
    while (a.size() < b.size()) a = "0" + a;
    while (b.size() < a.size()) b = "0" + b;
    if (a > b) return 1;
    if (a < b) return -1;
    return 0;
}

string sub(string a, string b) {
    if (compare(a, b) < 0) return "-" + sub(b, a);
    string res = "";
    int carry = 0;
    while (a.size() < b.size()) a = "0" + a;
    while (b.size() < a.size()) b = "0" + b;
    for (int i = a.size() - 1; i >= 0; i--) {
        int tmp = a[i] - b[i] - carry;
        if (tmp < 0) {
            tmp += 10;
            carry = 1;
        } else carry = 0;
        res = char(tmp % 10 + '0') + res;
    }
    while (res.size() > 1 && res[0] == '0') res = res.substr(1);
    return res;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string s, p;
    cin >> s >> p;
    cout << sub(s, p);
    
}
