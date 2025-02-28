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

    cin >> nMax;
    sang();
    int cnt = 0;
    for (int i = 2; i <= nMax; i++) {
        if (isPrime[i]) {
            cnt++;
        }
    }
    cout << cnt;
    


}
