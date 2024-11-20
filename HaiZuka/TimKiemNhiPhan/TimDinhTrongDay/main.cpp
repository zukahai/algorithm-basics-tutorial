#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int>& a) {
    int n = a.size();
    // Nếu mảng chỉ có 1 phần tử, đó chính là đỉnh
    if (n == 1) return 1;
    
    // Kiểm tra phần tử đầu tiên
    if (a[0] >= a[1]) return 1;
    
    // Kiểm tra phần tử cuối cùng
    if (a[n-1] >= a[n-2]) return n;
    
    // Tìm kiếm nhị phân
    int left = 1, right = n-2;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Nếu phần tử giữa lớn hơn hoặc bằng cả hai bên, đó là đỉnh
        if (a[mid] >= a[mid-1] && a[mid] >= a[mid+1])
            return mid + 1;
            
        // Nếu phần tử bên trái lớn hơn, đỉnh nằm ở nửa trái
        if (a[mid] < a[mid-1])
            right = mid - 1;
        // Ngược lại, đỉnh nằm ở nửa phải
        else
            left = mid + 1;
    }
    return -1; // Không tìm thấy đỉnh (không xảy ra với input hợp lệ)
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
    
    cout << findPeak(a) << endl;
    
    return 0;
}
