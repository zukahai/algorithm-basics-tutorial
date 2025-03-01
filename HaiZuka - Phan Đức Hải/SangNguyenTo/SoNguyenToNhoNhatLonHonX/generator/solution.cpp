#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    int x;
    cin >> x;
    for (int i = max(x + 1, 2); ; i++)
        if (isPrime(i))
        {
            cout << i;
            return 0;
        }

}
