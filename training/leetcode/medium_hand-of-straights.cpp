# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int> count;
        for (int card : hand) {
            count[card]++;
        }
        while (!count.empty()) {
            int start = count.begin()->first;
            for (int card = start; card < start + groupSize; card++) {
                if (count.find(card) == count.end()) {
                    return false;
                }
                count[card]--;
                if (count[card] == 0) {
                    count.erase(card);
                }
            }
        }
        return true;
    }
};
int main() {
    Solution solution;
    vector<int> hand1 = {1, 2, 3, 6, 2, 3, 4, 7, 8};
    int W1 = 3;
    cout << boolalpha << solution.isNStraightHand(hand1, W1) << endl;
    vector<int> hand2 = {1, 2, 3, 4, 5};
    int W2 = 4;
    cout << boolalpha << solution.isNStraightHand(hand2, W2) << endl;
    vector<int> hand3 = {1, 2, 3, 4, 5};
    int W3 = 5;
    cout << boolalpha << solution.isNStraightHand(hand3, W3) << endl;
    return 0;
}