#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

bool isPrime(long long n) {
    if (n < 2) {
        return false;
    }
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

long long nextPrime(long long n) {
    while (!isPrime(n)) {
        n++;
    }
    return n;
}

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    long long k = random((iTest - 1) * 200000000, iTest * 200000000);
    if (k < 0)
        k = -k;
    

    if (random(0, 1) == 1) {
        cout << " " << nextPrime(k);
    } else {
        cout << k + 1;
    }
    
}
