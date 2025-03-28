#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;
    vector<long long> res {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int intdex = 0;

    while (res[res.size() - 1] < n)
    {
        long long temp = res[intdex];
        int last_digit = temp % 10;

        if (last_digit % 2 == 0) {
            res.push_back(temp * 10 + last_digit / 2);
        }
        if (last_digit * 2 < 10) {
            res.push_back(temp * 10 + last_digit * 2);
        }
        intdex++;
    }

    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] <= n)
        {
            cout << res[i] << " ";
        }
    }
    

    
}
