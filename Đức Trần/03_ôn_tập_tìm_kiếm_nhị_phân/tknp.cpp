#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[7] = {1, 2, 3, 4, 6, 7, 8};
    int n = 7;
    int x = 5;

    // Tìm vị của x trong mảng a, nếu không có in ra -
    int l = 0, r = n - 1;
    int index = -1;
    while(l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            index = m;
            l = m + 1;
        } else {
            if (a[m] > x) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        
    }
    if (index == -1) {
            cout << a[l] << endl;
            cout << a[r] << endl;
    }
    /*
    index = -1
    l: chỉ số của phần từ đầu tiên lớn hơn x
    r: chỉ số của phần từ cuối cùng nhỏ hơn x
    
    */

    cout << index;

}