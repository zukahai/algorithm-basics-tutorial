/*
https://codeforces.com/contest/1473/problem/G
*/
#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define fore(i, l, r) for (int i = int(l); i < int(r); ++i)
#define sz(a) int((a).size())

template<const int &MOD>
struct _m_int {
  int val;
 
  _m_int(int64_t v = 0) {
    if (v < 0) v = v % MOD + MOD;
    if (v >= MOD) v %= MOD;
    val = int(v);
  }
 
  _m_int(uint64_t v) {
    if (v >= MOD) v %= MOD;
    val = int(v);
  }
 
  _m_int(int v) : _m_int(int64_t(v)) {}
  _m_int(unsigned v) : _m_int(uint64_t(v)) {}
 
  static int inv_mod(int a, int m = MOD) {
    int g = m, r = a, x = 0, y = 1;
 
    while (r != 0) {
      int q = g / r;
      g %= r; swap(g, r);
      x -= q * y; swap(x, y);
    }
 
    return x < 0 ? x + m : x;
  }
 
  explicit operator int() const { return val; }
  explicit operator unsigned() const { return val; }
  explicit operator int64_t() const { return val; }
  explicit operator uint64_t() const { return val; }
  explicit operator double() const { return val; }
  explicit operator long double() const { return val; }
 
  _m_int& operator+=(const _m_int &other) {
    val -= MOD - other.val;
    if (val < 0) val += MOD;
    return *this;
  }
 
  _m_int& operator-=(const _m_int &other) {
    val -= other.val;
    if (val < 0) val += MOD;
    return *this;
  }
 
  static unsigned fast_mod(uint64_t x, unsigned m = MOD) {
#if !defined(_WIN32) || defined(_WIN64)
    return unsigned(x % m);
#endif
    // Optimized mod for Codeforces 32-bit machines.
    // x must be less than 2^32 * m for this to work, so that x / m fits in an unsigned 32-bit int.
    unsigned x_high = unsigned(x >> 32), x_low = unsigned(x);
    unsigned quot, rem;
    asm("divl %4\n"
      : "=a" (quot), "=d" (rem)
      : "d" (x_high), "a" (x_low), "r" (m));
    return rem;
  }
 
  _m_int& operator*=(const _m_int &other) {
    val = fast_mod(uint64_t(val) * other.val);
    return *this;
  }
 
  _m_int& operator/=(const _m_int &other) {
    return *this *= other.inv();
  }
 
  friend _m_int operator+(const _m_int &a, const _m_int &b) { return _m_int(a) += b; }
  friend _m_int operator-(const _m_int &a, const _m_int &b) { return _m_int(a) -= b; }
  friend _m_int operator*(const _m_int &a, const _m_int &b) { return _m_int(a) *= b; }
  friend _m_int operator/(const _m_int &a, const _m_int &b) { return _m_int(a) /= b; }
 
  _m_int& operator++() {
    val = val == MOD - 1 ? 0 : val + 1;
    return *this;
  }
 
  _m_int& operator--() {
    val = val == 0 ? MOD - 1 : val - 1;
    return *this;
  }
 
  _m_int operator++(int) { _m_int before = *this; ++*this; return before; }
  _m_int operator--(int) { _m_int before = *this; --*this; return before; }
 
  _m_int operator-() const {
    return val == 0 ? 0 : MOD - val;
  }
 
  friend bool operator==(const _m_int &a, const _m_int &b) { return a.val == b.val; }
  friend bool operator!=(const _m_int &a, const _m_int &b) { return a.val != b.val; }
  friend bool operator<(const _m_int &a, const _m_int &b) { return a.val < b.val; }
  friend bool operator>(const _m_int &a, const _m_int &b) { return a.val > b.val; }
  friend bool operator<=(const _m_int &a, const _m_int &b) { return a.val <= b.val; }
  friend bool operator>=(const _m_int &a, const _m_int &b) { return a.val >= b.val; }
 
  _m_int inv() const {
    return inv_mod(val);
  }
 
  _m_int pow(int64_t p) const {
    if (p < 0)
      return inv().pow(-p);
 
    _m_int a = *this, result = 1;
 
    while (p > 0) {
      if (p & 1)
        result *= a;
      a *= a;
      p >>= 1;
    }
 
    return result;
  }
  
  friend string to_string(_m_int<MOD> x) {
    return to_string(x.val);
  }
 
  friend ostream& operator<<(ostream &os, const _m_int &m) {
    return os << m.val;
  }
};

extern const int MOD = 998244353;
using Mint = _m_int<MOD>;

const int g = 3;
const int LOGN = 15;

vector<Mint> w[LOGN];
vector<int> rv[LOGN];

void prepare() {
  Mint wb = Mint(g).pow((MOD - 1) / (1 << LOGN));
  forn(st, LOGN - 1) {
    w[st].assign(1 << st, 1);
    Mint bw = wb.pow(1 << (LOGN - st - 1));
    Mint cw = 1;
    forn(k, 1 << st) {
      w[st][k] = cw;
      cw *= bw;
    }
  }
  forn(st, LOGN) {
    rv[st].assign(1 << st, 0);
    if (st == 0) {
      rv[st][0] = 0;
      continue;
    }
    int h = (1 << (st - 1));
    forn(k, 1 << st)
      rv[st][k] = (rv[st - 1][k & (h - 1)] << 1) | (k >= h);
  }
}

void ntt(vector<Mint> &a, bool inv) {
  int n = sz(a);
  int ln = __builtin_ctz(n);
  forn(i, n) {
    int ni = rv[ln][i];
    if (i < ni) swap(a[i], a[ni]);
  }
  forn(st, ln) {
    int len = 1 << st;
    for (int k = 0; k < n; k += (len << 1)) {
      fore(pos, k, k + len){
        Mint l = a[pos];
        Mint r = a[pos + len] * w[st][pos - k];
        a[pos] = l + r;
        a[pos + len] = l - r;
      }
    }
  }
  if (inv) {
    Mint rn = Mint(n).inv();
    forn(i, n) a[i] *= rn;
    reverse(a.begin() + 1, a.end());
  }
}

vector<Mint> mul(vector<Mint> a, vector<Mint> b) {
  int cnt = 1 << (32 - __builtin_clz(sz(a) + sz(b) - 1));
  a.resize(cnt);
  b.resize(cnt);
  ntt(a, false);
  ntt(b, false);
  vector<Mint> c(cnt);
  forn(i, cnt) c[i] = a[i] * b[i];
  ntt(c, true);
  return c;
}

int main() {
  prepare();
  
  vector<Mint> fact(1, 1), ifact(1, 1);
  auto C = [&](int n, int k) -> Mint {
    if (k < 0 || k > n) return 0;
    while (sz(fact) <= n) {
      fact.push_back(fact.back() * sz(fact));
      ifact.push_back(fact.back().inv());
    }
    return fact[n] * ifact[k] * ifact[n - k];
  };
  
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  forn(i, n) cin >> a[i] >> b[i];
  
  vector<Mint> ans(1, 1);
  forn(i, n) {
    vector<Mint> Cs;
    for (int j = b[i] - sz(ans) + 1; j < sz(ans) + a[i]; ++j)
      Cs.push_back(C(a[i] + b[i], j));
    auto res = mul(ans, Cs);
    int cnt = sz(ans);
    ans.resize(cnt + a[i] - b[i]);
    forn(j, sz(ans)) ans[j] = res[cnt + j - 1];
  }
  
  cout << accumulate(ans.begin(), ans.end(), Mint(0)) << endl;
}