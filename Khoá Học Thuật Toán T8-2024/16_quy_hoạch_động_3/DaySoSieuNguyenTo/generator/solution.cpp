#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

vector<long long> ssnt() {
    vector<long long> snt;
    snt.push_back(2);
    snt.push_back(3);
    snt.push_back(5);
    snt.push_back(7);

    int index = 0;
    while (index < snt.size())
    {
        int cur = snt[index];
        for (int i = 1; i <= 9; i += 2)
        {
            long long next = cur * 10 + i;
            if (isPrime(next))
                snt.push_back(next);
        }
        index++;

    }
    return snt;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    vector<long long> vA = ssnt();
    unordered_map<long long, int> mp;

    for (int i = 0; i < vA.size(); i++)
    {
        mp[vA[i]] = i;
    }

    int n;
    cin >> n;
    vector<long long> a(n);
    vector<int> dp(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    dp[0] = (mp.find(a[0]) != mp.end() ? 1 : 0);

    for (int i = 1; i < n; i++) {
        if (mp.find(a[i]) != mp.end())
        {
            dp[i] = dp[i - 1] + 1;
        }
    }

    int max = 0;
    int e = 0;

    for (int i = 0; i < n; i++) {
        if (dp[i] > max) {
            e = i;
            max = dp[i];
        }
    }

    if (max == 0)
    {
        cout << -1;
    }
    else
    {
        cout << max << endl;
        int s = e - max + 1;
        for (int i = s; i <= e; i++) {
            cout << a[i] << " ";
        }
    }
    
}
