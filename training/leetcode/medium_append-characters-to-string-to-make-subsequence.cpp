#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int appendCharacters(string s, string t)
    {
        int j = 0;
        for (char c : s)
        {
            if (j < t.size() && c == t[j])
            {
                j++;
            }
        }
        return t.size() - j;
    }
};


int main()
{
    Solution sol;
    cout << sol.appendCharacters("abc", "ahbgdc") << endl;
    return 0;
}
