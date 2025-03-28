#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    vector <long long> ssnt = {2, 3, 5, 7};

    int index = 0;
    while (index < ssnt.size())
    {
        long long tmp = ssnt[index];
        for (int i = 1; i <= 9; i += 2)
        {
            long long n = tmp * 10 + i;
            if (isPrime(n))
            {
                ssnt.push_back(n);
            }
        }
        index++;
    }

    long long n;
    cin >> n;

    long long min = 1e18;
    vector <long long> res;
    for (auto x: ssnt) {
        if (abs(x - n) < min) {
            min = abs(x - n);
            res.clear();
            res.push_back(x);
        } else if (abs(x - n) == min) {
            res.push_back(x);
        }
    }

    for (auto x: res) {
        cout << x << " ";
    }
    
    

    
}
