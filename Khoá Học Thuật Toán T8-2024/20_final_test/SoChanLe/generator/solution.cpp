#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long a, b;
    cin >> a >> b;
    vector<long long> res = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index = 0;
    while (res.back() <= b)
    {
        long long x = res[index];
        long long k = 1 - x % 2;
        for (int i = k; i < 10; i += 2)
        {
            long long y = x * 10 + i;
            res.push_back(y);
        }
        index++;
    }

    int cnt = 0;
    for (long long x : res)
    {
        if (x >= a && x <= b)
        {
            cnt++;
        }
    }

    cout << cnt;
    
}
