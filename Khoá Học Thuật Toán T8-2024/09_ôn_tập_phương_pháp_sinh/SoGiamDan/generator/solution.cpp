#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;
    vector<long long> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int index = 0;

    while (a[a.size() - 1] <= n && index < a.size())
    {
        long long temp = a[index];
        int lastDigit = temp % 10;
        for (int i = 0; i < lastDigit; i++)
        {
            long long newNum = temp * 10 + i;
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
