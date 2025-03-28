#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Request {
    int start, end;
};

bool compareRequest(const Request &a, const Request &b) {
    return a.start < b.start;
}

int main() {
    int N, R, Q;
    double P;
    cin >> N >> R >> Q >> P;

    vector<Request> requests(R);
    for (int i = 0; i < R; i++) {
        cin >> requests[i].start >> requests[i].end;
    }

    priority_queue<int, vector<int>, greater<int>> available_times;
    for (int i = 0; i < Q; i++) {
        available_times.push(0);
    }

    int unmet_requests = 0;

    for (int i = 0; i < R; i++) {
        if (available_times.top() <= requests[i].start) {
            available_times.pop();
            available_times.push(requests[i].end);
        } else {
            unmet_requests++;
        }
    }

    double unmet_percentage = (unmet_requests * 100.0) / R;
    cout << R - unmet_requests << "/" << R << ": ";
    if (unmet_percentage > P) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    cout << endl;

    return 0;
}
