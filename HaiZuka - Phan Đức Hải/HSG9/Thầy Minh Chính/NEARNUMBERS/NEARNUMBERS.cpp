#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("NEARNUMBERS.INP");
    ofstream cout("NEARNUMBERS.INP");

    long long n;
    cin >> n;
    vector<long long> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index = 0;
    while (a[a.size() - 1] <= n)
    {
        long long temp = a[index];
        int lastDigit = temp % 10;
        if (lastDigit - 1 >= 0)
        {
            long long newNum = temp * 10 + lastDigit - 1;
            a.push_back(newNum);
        }

        if (lastDigit + 1 <= 9)
        {
            long long newNum = temp * 10 + lastDigit + 1;
            a.push_back(newNum);
        }
        index++;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > n)
            break;
        cout << a[i] << " ";
    }
}
