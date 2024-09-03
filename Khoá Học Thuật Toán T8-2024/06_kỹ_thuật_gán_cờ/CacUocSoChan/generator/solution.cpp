#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;
    vector <long long> a;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            a.push_back(i);
            if (i * i != n) {
                a.push_back(n / i);
            }
        }
    }

    sort(a.begin(), a.end());
    int flag = 0;

    for (long long i = 0; i < a.size(); i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
            flag = 1;
        }
    }

    if (flag == 0) {
        cout << -1;
    }
}
