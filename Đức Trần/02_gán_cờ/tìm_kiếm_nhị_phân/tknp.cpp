#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[6] = {4, 10, 200, 4, 10, 200};
    int x = 2020;

    // Tìm vị của x trong mảng a, nếu không có in ra -
    int index = -1;
    for (int i = 0; i < 6; i++) {
        if (a[i] == x) {
            index = i;
        }
    }
    cout << index;

}

/*
1 đến 100


100->50->25->12->6->3->1

 */

