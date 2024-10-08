#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;
    
    double N = n;
    N /= 9;
    N *= 2;
    N = sqrt(N);
    long long n1 = N;

    if (9 * (n1 * (n1 + 1) / 2) == n)
    {
        cout << 9;;
        return 0;
    }

    if (9 * (n1 * (n1 + 1) / 2) > n)
    {
        n1 -= 1;
    }


    n -= (9 * (n1 * (n1 + 1) / 2));

    long long numOfDigit = n1 + 1;

    // cout << "n = " << n << endl;
    // cout << "numOfDigit = " << numOfDigit << endl;

    cout << (n + numOfDigit - 1) / numOfDigit;
    

    
}
