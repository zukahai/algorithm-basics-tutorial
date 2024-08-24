#include<bits/stdc++.h>
using namespace std;

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

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string s, p;
    cin >> s >> p;
    cout << sum(s, p);
    
}
