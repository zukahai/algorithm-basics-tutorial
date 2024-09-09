#include<bits/stdc++.h>
using namespace std;

string gen(char c, int n) {
    string res = "";
    for (int i = 0; i < n; i++) {
        res += c;
    }
    return res;
}

bool compare(string a, string b) {
    while (a.size() < b.size()) {
        a = "0" + a;
    }
    while (b.size() < a.size()) {
        b = "0" + b;
    }
    
    return a <= b;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string s;
    getline(cin, s);
    
    int len = 1;
    while (true) {
        for (char ch = '1' ; ch <= '9'; ch++) {
            string res = gen(ch, len);
            if (compare(res, s)) {
                cout << res << " ";
            } else 
                return 0;
        }
        len++;
    }
}
