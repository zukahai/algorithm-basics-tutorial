#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long n) {
    long long x = sqrt(n);
    return x * x == n;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây

    vector<long long> a = {1, 4, 9};

    long long n;
    cin >> n;
    int index = 0;
    while (a.back() <= n && index < a.size()) {
        long long temp = a[index];
        for (int i = 0; i <= 9; i++) {
            if (isPerfectSquare(temp * 10 + i)) {
                a.push_back(temp * 10 + i);
            }
        }
        index++;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= n) {
            cout << a[i] << " ";
        }
    }


}
