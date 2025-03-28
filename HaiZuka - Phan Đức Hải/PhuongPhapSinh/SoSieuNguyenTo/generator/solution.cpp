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

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

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

    long long a, b;
    cin >> a >> b;
    for (int i = 0; i < snt.size(); i++)
        if (snt[i] >= a && snt[i] <= b)
            cout << snt[i] << " ";
    
}
