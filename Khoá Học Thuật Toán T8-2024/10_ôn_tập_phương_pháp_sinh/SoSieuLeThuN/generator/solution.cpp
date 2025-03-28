#include<bits/stdc++.h>
using namespace std;

vector<int> solve(long long n) {
    vector<long long> p;
    p.push_back(1);
    while (p.back() > 0)
    {
        p.push_back(p.back() * 5);
    }
    p[0] = 0;
    for (int i = 1; i < p.size(); i++) {
        p[i] += p[i - 1];
    }

    vector<int> res;
    while (n > 0) {
        if (n <= 5) {
            res.push_back(n);
            break;
        }
       
        int index = 1;
        while (n > p[index]) {
            index++;
        }
        index--;
        n -= p[index];
        res.push_back((n - 1) % 5 + 1);
        n = p[index - 1] + (n + 4) / 5;
    }
    

    reverse(res.begin(), res.end());
    return res;
}



int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;

    string s[6] = {"", "1", "3", "5", "7", "9"};
    vector<int> p = solve(n);
    for (auto x: p) {
        cout << s[x];
    }
}
