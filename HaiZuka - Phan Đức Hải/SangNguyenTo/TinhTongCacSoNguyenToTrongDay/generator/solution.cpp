#include<bits/stdc++.h>
using namespace std;
int nMax = 10000000;

vector<bool> isPrime(nMax + 1, true);

void sang() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= nMax; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= nMax; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây

    nMax = 0;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > nMax) {
            nMax = a[i];
        }
    }

    sang();
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0)
            continue;
        if (isPrime[a[i]]) {
            sum += a[i];
        }
    }

    cout << sum << endl;


}
