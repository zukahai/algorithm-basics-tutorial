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
            a.push_back(n / i);
        }
    }

    if ((int)sqrt(n) == sqrt(n)) {
        a.pop_back();
    }

    sort(a.begin(), a.end());

    for (long long i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    
}
