#include <bits/stdc++.h>

using namespace std;

int a[3], b[3];

int main()
{
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    int alice = 0, bob = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            alice++;
        }
        else if (a[i] < b[i])
        {
            bob++;
        }
    }
    cout << alice << " " << bob;
}