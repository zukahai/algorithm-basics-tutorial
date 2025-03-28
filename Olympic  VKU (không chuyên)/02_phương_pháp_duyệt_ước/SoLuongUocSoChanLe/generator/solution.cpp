#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;
    int uL = 0;
    int uC = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
            {
                uC++;
            }
            else
            {
                uL++;
            }

            if (n / i != i)
            {
                if ((n / i) % 2 == 0)
                {
                    uC++;
                }
                else
                {
                    uL++;
                }
            }
        }
    }

    cout << uC << " " << uL;

    
}
