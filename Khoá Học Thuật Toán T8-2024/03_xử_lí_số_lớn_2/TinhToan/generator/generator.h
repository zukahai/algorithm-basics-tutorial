#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

int compare(string a, string b) {
    while (a.size() < b.size()) a = "0" + a;
    while (b.size() < a.size()) b = "0" + b;
    if (a > b) return 1;
    if (a < b) return -1;
    return 0;
}

string sum(string a, string b)
{
    string res = "";
    int carry = 0;
    while (a.size() < b.size()) a = "0" + a;
    while (b.size() < a.size()) b = "0" + b;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int tmp = a[i] - '0' + b[i] - '0' + carry;
        carry = tmp / 10;
        res = char(tmp % 10 + '0') + res;
    }
    if (carry) res = "1" + res;
    return res;
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

string mul(string a, string b) {
    string m[10];
    m[0] = "0";
    m[1] = a;
    for (int i = 2; i < 10; i++) m[i] = sum(m[i - 1], a);
    string res = "0";
    string bn = "";
    for (int i = b.size() - 1; i >= 0; i--) {
        res = sum(res, m[b[i] - '0'] + bn);
        bn += "0";
    }
    return res;
}

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int length = iTest / 5 + 1;
    if (length > 9) length = 9;

    string a = random_string(1, "123456789") + random_string(length - 1, "0123456789");
    string b = random_string(1, "123456789") + random_string(length - 1, "0123456789");
    string c = random_string(1, "123456789") + random_string(length - 1, "0123456789");
    string d = random_string(1, "123456789") + random_string(length - 1, "0123456789");

    string C = mul(a, b);
    string A = mul(a, c);
    string B = mul(b, d);
    cout << A << endl << B << endl << C;
    
}
