#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] < 'A' || s[i] > 'Z') {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

}
