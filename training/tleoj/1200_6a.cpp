/*
https://tleoj.edu.vn/problem/6a
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    int index = 1;
    int step = 1;
    while(true) {
        cout << index << endl;
        index += step;
        if (index < 1) {
            step = 1;
            index = 1;
        }
        if (index > n) {
            step = -1;
            index = n;
        }
        cin >> s;
        if (s == "TRUE") {
            break;
        }
    }
}