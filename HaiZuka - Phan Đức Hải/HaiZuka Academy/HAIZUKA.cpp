#include <bits/stdc++.h>

using namespace std;


int main() {
    // Nhập xuất nhanh
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // Đọc file
    #ifndef ONLINE_JUDGE
    freopen("HAIZUKA.INP", "r", stdin);
    freopen("HAIZUKA.OUT", "w", stdout);
    #endif

    long long n;
    int digit;
    cin >> n;
    int index = 0;
    int a[20];

    while (n != 0) {
        digit = n % 10;
        a[index] = digit;
        index++;

        n /= 10;
    }

    sort(a, a + index);

    long long minNumber = 0;
    for (int i = 0; i < index; i++) 
        minNumber = minNumber * 10 + a[i];
    
    long long maxNumber = 0;
    for (int i = index - 1; i >= 0; i--)
        maxNumber = maxNumber * 10 + a[i];

    cout << maxNumber << endl;
    cout << minNumber << endl;
    cout << maxNumber - minNumber;

}