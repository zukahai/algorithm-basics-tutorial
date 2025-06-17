#include<bits/stdc++.h>
using namespace std;

long long concat(int a, string b) {
    return stoll(to_string(a) + b);
}

string reverseNumber(long long n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return s;
}

vector<long long> generatePalindromes(int n) {
    vector<long long> palindromes = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99};
    for (int i = 10; i <= n; ++i) {
        long long palindrome = concat(i, reverseNumber(i));
        palindromes.push_back(palindrome);
        palindrome = concat(i, reverseNumber(i / 10));
        palindromes.push_back(palindrome);
    }
    sort(palindromes.begin(), palindromes.end());
    return palindromes;
}

int main()
{
    #ifndef ONLINE_JUDGE
    ifstream cin("HAIZUKA.INP");
    ofstream cout("HAIZUKA.OUT");
    #endif


    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<long long> palindromes = generatePalindromes(100000);
    for (int i = 0; i < n; ++i) {
        int index = lower_bound(palindromes.begin(), palindromes.end(), a[i]) - palindromes.begin();
        b[i] = palindromes[index];
        b[i] -= a[i];
    }

    for (int i = 0; i < 1000; i++)
        cout << palindromes[i] << endl;

    int res = -1;
    int l = 1, r = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        bool ok = false;
        long long sum = 0;
        for (int i = 0; i < mid; ++i) {
            sum += b[i];
        }
        if (sum >= k) {
            ok = true;
        }
        for (int i = mid; i < n; ++i) {
            sum += b[i] - b[i - mid];
            if (sum >= k) {
                ok = true;
                break;
            }
        }
        if (ok) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << res << endl;

}
