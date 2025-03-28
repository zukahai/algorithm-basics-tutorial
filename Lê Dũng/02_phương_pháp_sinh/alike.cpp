#include <bits/stdc++.h>

using namespace std;

long long genAlike(int value, int length) {
    long long ans = 0;
    while (length--) {
        ans = ans * 10 + value;
    }
    return ans;
}

int main() {
    cout << genAlike(1, 15);
}

/*
7 5
77777


*/