#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] != a[0]) {
            flag = 0;
            break;
        }
    }

    cout << (flag == 1 ? "YES" : "NO");


    
}

/*
Kiểm tra dãy có phải tất cả đều chia hết cho 5 hay không
Nếu phải in YES, ngược lại in NO

5
10 15 20 25 30 -> YES

5
10 15 20 25 31 -> NO
*/
