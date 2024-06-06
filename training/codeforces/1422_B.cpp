/*
https://codeforces.com/contest/1422/problem/B
*/
#include <bits/stdc++.h>
 
#define fi first
#define se second
#define m_p make_pair
#define endl '\n'
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
 
using namespace std;
 
typedef long long ll;
 
const int MAXN = 412345;
const int MAXINT = 2047483098;
const ll MOD = 1e9 + 7;
const int MAX = 1e4;
 
const long double EPS = 1e-10;
 
long long calcAnswer(vector <long long> &numbers) {
    sort(begin(numbers), end(numbers));
    long long result = 0;
    
    int sz = numbers.size();
    for (int i = 0; i < sz; ++i) result += abs(numbers[i] - numbers[sz / 2]);
    return result;
}
 
void solve() {
     int n, m;
 
    cin >> n >> m;
    vector <vector <long long> > matrix(n);
    for (int i = 0; i < n; ++i) {
        matrix[i].resize(m);
        for (int j = 0; j < m; ++j) cin >> matrix[i][j];
    }
 
    long long answer = 0;
 
    int left_row = 0, right_row = n - 1;
    while(left_row <= right_row) {
        int left_column = 0, right_column = m - 1;
        while(left_column <= right_column) {
            vector <long long> cur_numbers = {matrix[left_row][left_column]};
            if (left_row != right_row) cur_numbers.push_back(matrix[right_row][left_column]);
            if (right_column != left_column) cur_numbers.push_back(matrix[left_row][right_column]);
            if (left_column != right_column && left_row != right_row) cur_numbers.push_back(matrix[right_row][right_column]);
            
            answer += calcAnswer(cur_numbers);
 
            left_column++, right_column--;
        }
 
        left_row++, right_row--;
    }
 
    cout << answer << endl;
 
}
 
int main()
{
    fast_io;
    
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
   
    return 0;
}