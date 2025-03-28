#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector <int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i])) {
            cout << a[i] << " ";
            flag = 1;
        }
    }

    if (flag == 0)
    {
        cout << "NO";
    }
}
