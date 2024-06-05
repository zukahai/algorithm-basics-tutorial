/*
https://codeforces.com/contest/158/problem/A
*/

#include <iostream>
#include <algorithm>

using namespace std;

int a[10009];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int x = a[n - k];
    for (int i = 0; i < n; i++)
    if ((a[i] == x && x > 0) || (x == 0 && a[i] > 0)) {
        cout << n - i;
        return 0;
    } 
    cout << "0"; 
}