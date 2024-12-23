#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("MISSINGNUMBERS.INP");
    ofstream cout("MISSINGNUMBERS.OUT");
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    sort(a.begin(), a.end());
    int minNum = a[n - 1] + 1;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] > 1) {
            minNum = a[i - 1] + 1;
            break;
        }
    }
    int maxNum = a[0] - 1;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i + 1] - a[i] > 1) {
            maxNum = a[i] + 1;
            break;
        }
    }

    cout << minNum << " " << maxNum;

}
