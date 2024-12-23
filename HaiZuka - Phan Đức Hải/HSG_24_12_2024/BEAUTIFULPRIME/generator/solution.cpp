#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    
    int n;
    cin >> n;
    if (isPrime(n) && (n - 1) % 5 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
