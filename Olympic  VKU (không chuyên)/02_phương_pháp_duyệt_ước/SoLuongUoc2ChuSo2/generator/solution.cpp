#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;
    int u2cs = 0;
    for (int i = 10; i <= 99; i++)
    {
        if (n % i == 0)
        {
            u2cs++;
        }
    }

    cout << u2cs;

    
}
