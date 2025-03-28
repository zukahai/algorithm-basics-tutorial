#include <bits/stdc++.h>

using namespace std;

bool check(const string& s, int x) {
    int n = s.size();
    vector<int> positionsP;
    vector<int> positionsStar;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'P') positionsP.push_back(i);
        if (s[i] == '*') positionsStar.push_back(i);
    }

    int indexP = 0;
    int indexStar = 0;

    while (indexStar < positionsStar.size() && indexP < positionsP.size()) {
        if (positionsP[indexP] > positionsStar[indexStar]) {
            if (positionsP[indexP] - positionsStar[indexStar] > x) {
                return false;
            }
            int minStar = positionsStar[indexStar];
            while (indexStar < positionsStar.size() && positionsStar[indexStar] <= positionsP[indexP]) {
                indexStar++;
            }
            if (indexStar == positionsStar.size()) {
                return true;
            }
            while (indexStar < positionsStar.size()) {
                int maxStar = positionsStar[indexStar];
                int minD = min(abs(positionsP[indexP] - minStar), abs(positionsP[indexP] - maxStar));
                int maxD = max(abs(positionsP[indexP] - minStar), abs(positionsP[indexP] - maxStar));
                if (2 * minD + maxD <= x) {
                    indexStar++;
                    minD = min(abs(positionsP[indexP] - minStar), abs(positionsP[indexP] - maxStar));
                    maxD = max(abs(positionsP[indexP] - minStar), abs(positionsP[indexP] - maxStar));
                } else {
                    break;
                }
            }

        } else {
            while (indexStar < positionsStar.size() && positionsStar[indexStar] - positionsP[indexP] <= x) {
                indexStar++;
            }
        }
        indexP++;
    }
    return indexStar >= positionsStar.size();
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = 0;

    int l = 0;
    int r = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(s, mid)) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << res;
}
