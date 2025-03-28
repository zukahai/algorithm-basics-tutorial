#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("STUDENTS.INP");
    ofstream cout("STUDENTS.OUT");


    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    k = n - k;
    while(k--) {
        int maxIndex = a.size() - 1;
        for (int i = 1; i < a.size() - 1; i++) {
            if (a[i] < a[i + 1]) {
                maxIndex = i;
                break;
            }
        }
        a.erase(a.begin() + maxIndex);
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
    }
}
