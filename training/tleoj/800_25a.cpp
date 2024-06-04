/*
https://tleoj.edu.vn/problem/25a
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> a(3), b(3);

int main()
{
    string s;
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        b[0] = b[1] = b[2] = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == 'T') {
                b[0]++;
            }
            if (s[j] == 'V') {
                b[1]++;
            }
            if (s[j] == 'C') {
                b[2]++;
            }
        }
        int indexMax = 0;
        for (int j = 1; j < 3; j++) {
            if (b[j] > b[indexMax]) {
                indexMax = j;
            }
        }
        a[indexMax]++;
    }
    cout << a[0] << " " << a[1] << " " << a[2] << endl;
}