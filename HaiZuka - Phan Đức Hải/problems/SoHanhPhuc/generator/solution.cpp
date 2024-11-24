#include<bits/stdc++.h>
using namespace std;

vector <int> mp(10000009, -1);

int sumDigitSquare(int n) {
    int sum = 0;
    while (n > 0) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}

void solve(int n) {
    bool flag = false;
    if (mp[n] != -1)
        return;
    unordered_set <int> s;
    s.insert(n);
    while(true) {
        n = sumDigitSquare(n);
        if (mp[n] != -1) {
            flag = mp[n];
            break;
        }
        if (n == 1) {
            flag = true;
            break;
        }
        if (s.find(n) != s.end()) {
            break;
        }
        s.insert(n);
    }
    for (auto i : s) {
        mp[i] = flag;
        // cout << i << " ";
    }
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    // time start
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for (int i = 1; i <= 10000000; i++) {
        solve(i);
    }

    int count = 0;
    vector <int> mcd(10000009);
    mcd[0] = 0;
    for (int i = 1; i <= 10000000; i++) {
        if (mp[i] == 1) {
            count++;
        }
        mcd[i] = count;
    }

    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << mcd[b] - mcd[a - 1] << endl;
    }
}
