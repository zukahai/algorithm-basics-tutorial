#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    int c = 0;
    for (int i = 1; i <= n; i += 2) {
        c++;
    }

    cout << c;
    
}
// O(n^2) -> 10000 -> 10^8 -> 10^8 operations
// O(n) -> 100000000 -> 10^8 -> 10^8 operations
// O(1) ->10^18 -> 10^8 -> 10^8 operations



/*
O(1): Không phụ thuộc vào kích thước dữ liệu đầu vào.
O(log(n)): Phụ thuộc vào logarit cơ số 2 của kích thước dữ liệu đầu vào.
O(sqrt(n)): Phụ thuộc vào căn bậc hai của kích thước dữ liệu đầu vào.
O(n): Phụ thuộc trực tiếp vào kích thước dữ liệu đầu vào.
O(n^2): Phụ thuộc vào bình phương của kích thước dữ liệu đầu vào.
O(n^3): Phụ thuộc vào lập phương của kích thước dữ liệu đầu vào.
O(2^n): Phụ thuộc vào 2 mũ n, nếu n tăng lên một đơn vị thì độ phức tạp sẽ tăng gấp đôi.

*/