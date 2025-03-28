#include <iostream>
#include <vector>

const int MOD = 1000000007;

using namespace std;

typedef long long ll;
typedef vector<vector<ll>> matrix;

matrix mat_mult(const matrix& A, const matrix& B) {
    int n = A.size();
    matrix C(n, vector<ll>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    return C;
}

matrix mat_pow(matrix A, ll p) {
    int n = A.size();
    matrix result(n, vector<ll>(n, 0));
    for (int i = 0; i < n; ++i) {
        result[i][i] = 1;
    }
    while (p > 0) {
        if (p % 2 == 1) {
            result = mat_mult(result, A);
        }
        A = mat_mult(A, A);
        p /= 2;
    }
    return result;
}

ll solve(ll a, ll b, ll c, ll d, ll n) {
    if (n == 0) return b;
    if (n == 1) return a;

    matrix T_G = {
        {1, 2},
        {1, 0}
    };

    vector<ll> G_base = {c, d};

    T_G = mat_pow(T_G, n-1);

    ll G_n = (T_G[0][0] * G_base[0] + T_G[0][1] * G_base[1]) % MOD;
    ll G_n_minus_1 = (T_G[1][0] * G_base[0] + T_G[1][1] * G_base[1]) % MOD;

    T_G = mat_pow(T_G, n-2);
    ll G_n_minus_2 = (T_G[1][0] * G_base[0] + T_G[1][1] * G_base[1]) % MOD;

    matrix T_F = {
        {3, 2, 1, 1, 1},
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 2},
        {0, 0, 0, 1, 0}
    };

    vector<ll> F_base = {a, b, G_n, G_n_minus_1, G_n_minus_2};

    T_F = mat_pow(T_F, n-1);

    ll F_n = 0;
    for (int i = 0; i < 5; ++i) {
        F_n = (F_n + T_F[0][i] * F_base[i]) % MOD;
    }

    return F_n;
}

int main() {
    ll a, b, c, d, n;
    cin >> a >> b >> c >> d >> n;
    cout << solve(a, b, c, d, n) << endl;
    return 0;
}
