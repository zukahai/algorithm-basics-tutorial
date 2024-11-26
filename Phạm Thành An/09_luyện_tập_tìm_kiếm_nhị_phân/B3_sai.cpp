#include <bits/stdc++.h>
using namespace std;

int tknp_dau(int n, vector<int>& a, int x){
    int l = 1, r = n;
    int res = -1;
    while (l <= r) {
        int m = (l+r)/2; 
        if (a[m] > x) {
            res = m;  
            r = m - 1;        
        } else {
            l = m + 1;          
        }
    }
    return res-1;
}
int tknp_cuoi(int n, vector<int>& a, int x) {
    int l = 1, r = n;
    int res = -1;
    while (l <= r) {
        int m = (l+r)/2; 
        if (a[m] > x) {        
            r = m - 1;        
        } else {
            res = m;
            l = m + 1;          
        }
    }
    return res+1;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        int first = tknp_dau(n,a,x), last = tknp_cuoi(n,a,x);
        if(first==0) cout << -1 << " ";
        else cout << first << " ";
        if(last == n+1) cout << -1 << endl;
        else cout << last << endl;
    }

    return 0;
}
