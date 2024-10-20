#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 100005;
const int LOG = 20;
vector<int> tree[MAXN];
int up[MAXN][LOG];
int depth[MAXN];

// Hàm DFS để tính toán tổ tiên và độ sâu của các đỉnh
void dfs(int v, int p) {
    up[v][0] = p;
    for (int i = 1; i < LOG; i++) {
        if (up[v][i-1] != -1) {
            up[v][i] = up[up[v][i-1]][i-1];
        } else {
            up[v][i] = -1;
        }
    }
    for (int u : tree[v]) {
        if (u != p) {
            depth[u] = depth[v] + 1;
            dfs(u, v);
        }
    }
}

// Tìm tổ tiên chung gần nhất của u và v
int lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);

    int diff = depth[u] - depth[v];
    for (int i = 0; i < LOG; i++) {
        if ((diff >> i) & 1) {
            u = up[u][i];
        }
    }

    if (u == v) return u;

    for (int i = LOG - 1; i >= 0; i--) {
        if (up[u][i] != up[v][i]) {
            u = up[u][i];
            v = up[v][i];
        }
    }
    return up[u][0];
}

// Kiểm tra nếu y là tổ tiên của v
bool is_ancestor(int y, int v) {
    return lca(y, v) == y;
}

// Kiểm tra nếu y nằm trên đường đi giữa x và z
bool is_on_path(int x, int y, int z) {
    int lca_xz = lca(x, z);
    // Kiểm tra nếu y nằm trên đường từ x tới z thông qua lca(x, z)
    return is_ancestor(y, x) && is_ancestor(y, z);
}

int main() {
    int n, q;
    cin >> n >> q;

    // Nhập cây
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    // Khởi tạo DFS từ đỉnh 1
    depth[1] = 0;
    dfs(1, -1);

    // Xử lý truy vấn
    while (q--) {
        int x, y, z;
        cin >> x >> y >> z;

        if (is_on_path(x, y, z)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
