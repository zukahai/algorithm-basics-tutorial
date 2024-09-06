#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string s;
    getline(cin, s);

    int index = -1;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '0' || s[i] == '5') {
            index = i;
            break;
        }
    }

    if (index != -1)
    cout << s.substr(0, index + 1) << endl;
    else cout << -1 << endl;
}
