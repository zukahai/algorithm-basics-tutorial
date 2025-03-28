#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;
    int count = 0;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count += 2;
        }
    }

    if ((int)sqrt(n) == sqrt(n)) {
        count--;
    }

    cout << (count == 2 ? "YES" : "NO");      
}
