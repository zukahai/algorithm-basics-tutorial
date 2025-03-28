#include <bits/stdc++.h>

using namespace std;

deque<char> dqP;
deque<char> window;

void printDq(deque<char> dq) {
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i];
    }
    cout << endl;
}

int main() {
    string p, s;
    cin >> s >> p;

    for (int i = 0; i < p.size(); i++) {
        dqP.push_back(p[i]);
    }

    for (int i = 0; i < p.size() - 1; i++) {
        window.push_back(s[i]);
    }
    window.push_front('a');

    int count = 0;
    int index = p.size() - 1;
    while (index < s.size()) {
        window.pop_front();
        window.push_back(s[index]);
        if (window == dqP) {
            count++;
            window.clear();
            for (int i = index; i < p.size() + index; i++) {
                window.push_back(s[i]);
            }
            index += p.size();
        } else {
            index++;
        }
    }

    cout << count << endl;

}