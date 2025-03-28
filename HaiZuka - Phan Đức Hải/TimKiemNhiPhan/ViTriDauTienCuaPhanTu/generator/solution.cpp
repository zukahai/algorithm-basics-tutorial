#include<bits/stdc++.h>
using namespace std;

int binarySeach(vector<int> a, int x) {
    int l = 0, r = a.size() - 1;
    int res = -2;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) {
            res = mid;
            r = mid - 1;
        } else if (a[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res + 1;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        cout << binarySeach(a, x) << endl;
    }

}
