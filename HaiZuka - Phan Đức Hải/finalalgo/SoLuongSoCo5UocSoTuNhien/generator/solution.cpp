#include<bits/stdc++.h>
using namespace std;

vector <bool> isPrime(100001, true);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= 100000; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= 100000; j += i) {
                isPrime[j] = false;
            }
        }
    }
}


int main()
{
    // Không phải online judge sẽ đọc file input.txt, output.txt
    #ifndef ONLINE_JUDGE
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    #endif
    // Bài giải của bạn ở dưới đây
    
    long long a, b;
    cin >> a >> b;
    long long count = 0;

    sieve();
    long long i = ceil(pow(a, 0.25));
    for (; i*i*i*i <= b; i++) {
        if (isPrime[i]) {
            count++;
        }
    }

    cout << count;
}
