#include<bits/stdc++.h>
using namespace std;

long long getM1(long long n) {
    long long k = ceil(sqrt(2 * n + 1));
    if (k % 2 != 0) k++;
    return k * k / 2 - n;
}

long long getM2(long long n) {
    long long res = 1;
    long long N = n;
    int index = 2;
    while (index <= sqrt(N)) {
        int count = 0;
        while (n % index == 0) {
            n /= index;
            count++;
        }
        if (count % 2 != 0) {
            res *= index;
        }
        index++;
    }
    if (n > 1) {
        res *= n;
    }
    return res;
}

int main()
{
    // ifstream cin("GARDEN.INP");
    // ofstream cout("GARDEN.OUT");
     ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    long long n;
    cin >> n;
    cout << getM1(n) << " " << getM2(n) << endl;

}
