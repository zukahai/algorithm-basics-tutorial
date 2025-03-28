/*
https://leetcode.com/problems/find-common-characters/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<string> commonChars(vector<string> words)
    {
        vector<string> res;
        int countSum = 0;
        for (char c = 'a'; c <= 'z'; c++)
        {
            countSum = 0;
            for (int i = 0; i < words.size(); i++)
            {
                int count = 0;
                for (int j = 0; j < words[i].size(); j++)
                {
                    if (words[i][j] == c)
                    {
                        count = 1;
                    }
                }
                countSum += count;
            }
            if (countSum == words.size())
            {
                string s = "";
                s += c;
                res.push_back(s);
            }
        }
        return res;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    Solution solution;
    vector<string> res = solution.commonChars(words);
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}