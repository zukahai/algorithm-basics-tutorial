#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;
    int u2cs = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i >= 10 && i <= 99)
            {
                u2cs++;
            }
            if (n / i != i)
            {
                if (n / i >= 10 && n / i <= 99)
                {
                    u2cs++;
                }
            }
        }
    }

    cout << u2cs;

    
}
