#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;  // Giới hạn n tối đa là 100

int BIT[MAXN][MAXN][MAXN];
int n;

// Hàm cập nhật Fenwick Tree 3D
void update(int x, int y, int z, int val) {
    for (int i = x; i <= n; i += i & -i) {
        for (int j = y; j <= n; j += j & -j) {
            for (int k = z; k <= n; k += k & -k) {
                BIT[i][j][k] += val;
            }
        }
    }
}

// Hàm truy vấn tổng từ (1,1,1) đến (x,y,z)
int query(int x, int y, int z) {
    int sum = 0;
    for (int i = x; i > 0; i -= i & -i) {
        for (int j = y; j > 0; j -= j & -j) {
            for (int k = z; k > 0; k -= k & -k) {
                sum += BIT[i][j][k];
            }
        }
    }
    return sum;
}

// Hàm truy vấn tổng từ (x1, y1, z1) đến (x2, y2, z2) sử dụng kỹ thuật inclusion-exclusion
int queryRange(int x1, int y1, int z1, int x2, int y2, int z2) {
    return query(x2, y2, z2)
        - query(x1 - 1, y2, z2)
        - query(x2, y1 - 1, z2)
        - query(x2, y2, z1 - 1)
        + query(x1 - 1, y1 - 1, z2)
        + query(x1 - 1, y2, z1 - 1)
        + query(x2, y1 - 1, z1 - 1)
        - query(x1 - 1, y1 - 1, z1 - 1);
}

int main() {
    int T;
    cin >> T;  // Số lượng bộ test

    while (T--) {
        int m;
        cin >> n >> m;  // Nhập kích thước n và số thao tác m

        // Khởi tạo lại Fenwick Tree cho mỗi bộ test
        memset(BIT, 0, sizeof(BIT));

        while (m--) {
            string op;
            cin >> op;

            if (op == "UPDATE") {
                int x, y, z, W;
                cin >> x >> y >> z >> W;

                // Truy vấn giá trị hiện tại của khối (x, y, z)
                int current_val = queryRange(x, y, z, x, y, z);
                
                // Cập nhật sự chênh lệch để giá trị trở thành W
                update(x, y, z, W - current_val);

            } else if (op == "QUERY") {
                int x1, y1, z1, x2, y2, z2;
                cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
                cout << queryRange(x1, y1, z1, x2, y2, z2) << endl;
            }
        }
    }

    return 0;
}
