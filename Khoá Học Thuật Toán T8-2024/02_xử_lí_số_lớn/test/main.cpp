#include <bits/stdc++.h>

using namespace std;

const long long m = 1000000007;

int main()
{
    /*
    Tính N!. N! = 1 * 2 * 3 * ... * N
    1 ≤ N ≤ 10^6
    Kết quả bài toán là N! mod 10^9 + 7 (10^9 + 7 = 1000000007)

    (1 * 2 * 3 * ... * N) % m
     */
    long long n;
    cin >> n;
    long long n1 = n + 1;
    if (n % 2 == 0)
        n /= 2;
    else
        n1 /= 2;
    cout << ((n % m) * (n1 % m)) % m;
    

    /*
    (a * b * c * d * e)



    Tính tổng 1 tới N (n <= 10^18)
    Kết quả % 10^9 + 7
    1 + 2 + 3 + ... + N = (N * (N + 1) / 2) % m
    
    */

}