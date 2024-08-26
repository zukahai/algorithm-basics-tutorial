#include <bits/stdc++.h>

using namespace std;

#define m 1000000007

int main() {
    
}

/* 
a^b = a * a * a * ... * a
a^b % m = (a % m) * (a % m) * (a % m) * ... * (a % m)
a^b % m = (a % m)^b

3^8 = (3 * 3) * (3 * 3) * (3 * 3) * (3 * 3)

a^2k = (a^2)^k

3^11 
= 3 * 3^10
= 3 * 9^5
= 3 * 9 * 9^4
= 3 * 9 * 81^2
= 3 * 9 * 6561^1
= 3 * 9 * 6561 * 6561^0

    Nhập a, b;
    a = a % m;
    res = 1;
    Trong khi b > 0:
        Nếu b chẵn:
            a = (a * a) % m;
            b = b / 2;
        Ngược lại:
            res = (res * a) % m;
            b = b - 1;

    In ra res;

*/









