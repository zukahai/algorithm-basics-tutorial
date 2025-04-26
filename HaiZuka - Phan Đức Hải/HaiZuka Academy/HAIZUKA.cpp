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

    // Chương trình chính

    vector<int> a = {1, 2, 3, 4, 5};
    iterator it = max_element(a.begin(), a.end()); 
   
    cout << "Phan tu lon nhat: " << *it;
}