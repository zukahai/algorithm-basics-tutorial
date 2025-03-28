#include <bits/stdc++.h>

using namespace std;

int main()
{
    string p, s;
    int k, h = -1;
    getline(cin, s);
    getline(cin, p);
    cin >> k;
    int l = min(s.length(), p.length());
    for (int i = 0; i < l; i++)
    {
        if (s[i] != p[i])
            break;
        else
            h = i;
    }
    int sum = (s.length() - 1 - h + p.length() - 1 - h);
    int d = k - sum;
    if (d >= 0)
    {
        if (d % 2 == 0)
            cout << "Yes";
        else if (d >= 2 * (h + 1))
            cout << "Yes";
        else
            cout << "No";
            
    }
    else
        cout << "No";
}