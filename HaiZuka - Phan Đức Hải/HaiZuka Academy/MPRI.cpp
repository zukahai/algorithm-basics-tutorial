#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n < 2) 
        return false;
    for (int i = 2; i <= sqrt(n); i++) 
        if (n % i == 0)
            return false;
    return true;
}

vector <bool> b(1000909, true);
void sang(int n) {
    b[0] = b[1] = false;
    for (int  i = 2; i <= sqrt(n); i++)
        if (b[i] == true) {
            for (int j = i * i; j <= n; j += i)
                b[j] = false;
        }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("MPRI.INP", "r", stdin);
    freopen("MPRI.OUT", "w", stdout);

    int q, n;
    cin >> q;
    if (q <= 100) {
        while(q--) {
            cin >> n;
            while (isPrime(n) == false)
                n++;
            cout << n << endl;
        }
    } else {
        sang(1000900);
        while(q--) {
            cin >> n;
            while (b[n] == false)
                n++;
            cout << n << endl;
        }
    }

}