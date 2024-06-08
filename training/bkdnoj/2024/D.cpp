#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> ropes(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> ropes[i];
    }

    vector<bool> visited(N + 1, false);
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0] = true;

    int maxReach = 0;
    
    while (!q.empty()) {
        int pos = q.front().first;
        int jumps = q.front().second;
        q.pop();

        if (pos == N) {
            cout << jumps << endl;
            return 0;
        }

        int furthest = min(N, pos + ropes[pos]);
        for (int i = maxReach + 1; i <= furthest; ++i) {
            if (!visited[i]) {
                visited[i] = true;
                q.push({i, jumps + 1});
            }
        }
        maxReach = max(maxReach, furthest);
    }

    cout << "CANNOT GET DESTINATION" << endl;
    return 0;
}
