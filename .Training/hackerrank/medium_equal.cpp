#include <bits/stdc++.h>

using namespace std;

int equal(vector<int> arr) {
    int min = *min_element(arr.begin(), arr.end());
    int result = INT_MAX;
    for (int i = 0; i < 3; i++) {
        int count = 0;
        for (int j = 0; j < arr.size(); j++) {
            int diff = arr[j] - min + i;
            count += diff / 5 + diff % 5 / 2 + diff % 5 % 2;
        }
        result = std::min(result, count);
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int result = equal(arr);
        cout << result << "\n";
    }
    return 0;
}