/*
https://tleoj.edu.vn/problem/edu019a
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "abc";
    int n = -1;
    if (s.size() > n) // false
        cout << "Hello ";

    if (s.size() - n > 0) // true
        cout << "Word!" << endl;
}