#include <bits/stdc++.h>

using namespace std;

string angryProfessor(int k, vector<int> a) {
    int count = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= 0) {
            count++;
        }
    }
    if (count >= k) {
        return "NO";
    } else {
        return "YES";
    }
}

int main() {
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        string result = angryProfessor(k, a);
        cout << result << "\n";
    }
    return 0;
}