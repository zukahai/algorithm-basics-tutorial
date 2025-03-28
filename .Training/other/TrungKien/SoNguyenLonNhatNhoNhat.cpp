#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string min, max;
    min = max = s;
    sort(min.begin(), min.end());
    sort(max.begin(), max.end(), greater<char>());
    cout << max << ' ' << min;
}