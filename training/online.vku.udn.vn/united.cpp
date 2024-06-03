#include <iostream>
#include <vector>

using namespace std;

// Function to perform the bundling operation once
vector<int> bundle_once(const vector<int>& A) {
    vector<int> new_A;
    int i = 0;
    while (i < A.size()) {
        if (i < A.size() - 1 && A[i] == A[i + 1]) {
            // Combine the two adjacent bundles
            new_A.push_back(A[i] + 1);
            i += 2;  // Move past the combined bundles
        } else {
            new_A.push_back(A[i]);
            i += 1;
        }
    }
    return new_A;
}

// Function to minimize the number of bundles
int min_bundles(int N, vector<int>& A) {
    while (true) {
        vector<int> new_A = bundle_once(A);
        if (new_A.size() == A.size()) {
            break;  // Stop if no more changes can be made
        }
        A = new_A;
    }
    return A.size();
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    int result = min_bundles(N, A);
    cout << result << endl;  // Output the minimum number of bundles
    return 0;
}
