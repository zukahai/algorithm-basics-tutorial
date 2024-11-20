#include <bits/stdc++.h>
using namespace std;

int findSmallestMissing(vector<int>& a) {
    int n = a.size();
    int left = 0, right = n - 1;
    
    // Nếu phần tử đầu tiên > 1, thì 1 là số thiếu nhỏ nhất
    if (a[0] > 1) return 1;
    
    // Tìm kiếm nhị phân
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Nếu a[mid] = mid + 1, số thiếu nằm ở nửa phải
        if (a[mid] == mid + 1)
            left = mid + 1;
        // Ngược lại, số thiếu nằm ở nửa trái
        else
            right = mid - 1;
    }
    
    // left là vị trí đầu tiên mà a[i] != i + 1
    return left + 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << findSmallestMissing(a) << endl;
    
    return 0;
}
