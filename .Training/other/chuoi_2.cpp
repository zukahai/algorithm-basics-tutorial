#include <bits/stdc++.h>

using namespace std;

string removeChar(string s, int pos)
{
    return s.substr(0, pos) + s.substr(pos + 1);
}

string del(string s, int x)
{
    int last = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] - '0') % 3 == x)
        {
            last = i;
            if (i < s.size() - 1 && s[i + 1] > s[i])
            {
                return removeChar(s, i);
            }
        }
    }
    return removeChar(s, last);

}

string solve(string s)
{
    vector<int> cnt(3, 0);
    int sum = 0;
    for (char c : s)
    {
        cnt[((c - '0') % 3)]++;
        sum += c - '0';
    }

    if (sum % 3 == 1)
    {
        if (cnt[1] > 0)
            return del(s, 1);
        if (cnt[2] >= 2)
            return del(del(s, 2), 2);
    }
    else if (sum % 3 == 2)
    {
        if (cnt[2] > 0)
            return del(s, 2);
        if (cnt[1] >= 2)
            return del(del(s, 1), 1);
    }
    else return s;
}

int main()
{
    int t, k;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s >> k;
        if(k)
            cout << solve(s) << endl;
        else
        {
            int i = s.size() - 1;
            for(; i >= 0; i--)
                if(s[i] == '5' || s[i] == '0') break;
            s.erase(i + 1);
            cout << s << endl;
        }
    }
}