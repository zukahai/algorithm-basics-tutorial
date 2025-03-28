#include <bits/stdc++.h>

using namespace std;

float diagonalOfCross(int S) {
    return round(sqrt(2 * S) * 10) / 10.0 ;
}

int main() {
    int S;
    cin >> S;
    cout << diagonalOfCross(S) << endl;
    return 0;
}