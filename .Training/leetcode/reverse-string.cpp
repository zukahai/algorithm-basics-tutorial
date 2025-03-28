#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        solve(s);
    }
private:
    void solve(vector<char> &s) {
        for (int i = 0; i < s.size() / 2; i++) {
            char t = s[i];
            s[i] = s[s.size() - i - 1];
            s[s.size() - i - 1] = t;
        }
    }
};

int main() {
    Solution solution;
    vector<char> s = {'h','e','l','l','o'};
    solution.reverseString(s);
    for(char c : s) {
        cout << c;
    }
}