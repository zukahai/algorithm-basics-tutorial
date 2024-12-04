#include<bits/stdc++.h>
using namespace std;

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

    int flag = 0;
    int count = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 5 == 0) {
            sum += a[i];
            flag = 1;
            count++;
        }
    }

    if (flag == 0) {
        cout << "-1";
    } else {
        cout << sum;
    }

    cout << endl << count;
}
