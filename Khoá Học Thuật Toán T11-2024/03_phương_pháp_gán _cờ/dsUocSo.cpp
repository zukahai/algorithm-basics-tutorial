#include <bits/stdc++.h>  

using namespace std;

vector <long long> a;

int main() {
    long long n;
    cin >> n;
    
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            a.push_back(i);
            if (n / i != i)
                a.push_back(n / i);
        }
    }

    sort(a.begin(), a.end());  // O(nlogn)

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
}