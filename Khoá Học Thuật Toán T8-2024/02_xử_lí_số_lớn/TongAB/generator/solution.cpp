#include<bits/stdc++.h>
using namespace std;

#define m 1000000007

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a > b) {
            cout << 0 << endl;
        } else {
            long long length = b - a + 1;
            long long sum = a + b;
            if (length % 2 == 0) {
                length /= 2;
            } else {
                sum /= 2;
            }
            cout << (length % m) * (sum % m) % m << endl;
        }
    }
}
