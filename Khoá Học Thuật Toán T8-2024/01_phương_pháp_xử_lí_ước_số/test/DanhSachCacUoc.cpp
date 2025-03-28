#include <bits/stdc++.h>

using namespace std;

// Nếu x là ước số của n thì n/x cũng là ước số của n

int main() {
    long long n; // 10^12
    cin >> n;
    vector<long long> uoc;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            uoc.push_back(i);
            uoc.push_back(n / i);
        }
    }
    
    double h = sqrt(n);
    if ((int)h == h)
      uoc.pop_back();
      
    sort(uoc.begin(), uoc.end());
      
    for (int i = 0; i < uoc.size(); i++) {
        cout << uoc[i] << " ";
    }

    // 18: 1 -> 4

}