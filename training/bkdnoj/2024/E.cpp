#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* insert(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

bool findPath(TreeNode* root, int n, vector<int>& path) {
    if (!root) return false;
    path.push_back(root->val);
    if (root->val == n)
        return true;
    if ((root->left && findPath(root->left, n, path)) || (root->right && findPath(root->right, n, path)))
        return true;
    path.pop_back();
    return false;
}

pair<int, int> findMinMax(vector<int>& pathA, vector<int>& pathB) {
    int i = 0;
    // for (int val : pathA) {
    //     cout << val << " ";
    // }
    // cout << endl;
    // for (int val : pathB) {
    //     cout << val << " ";
    // }
    // cout << endl;
    vector<int> a(100005, -1), b(100005, -1);
    for (int val : pathA) {
        a[val] = i++;
    }
    i = 0;
    for (int val : pathB) {
        b[val] = i++;
    }
    int minVal = 1000000000, maxVal = 0;
    for (int i = pathB.size() - 1; i >= 0; i--) {
        if (a[pathB[i]] >= 0) {
            int minA = 1000000;
            int maxA = -1;
            for (int j = i; j < pathB.size(); j++) {
                minA = min(minA, pathB[j]);
                maxA = max(maxA, pathB[j]);
            }
            for (int j = a[pathB[i]]; j < pathA.size(); j++) {
                minA = min(minA, pathA[j]);
                maxA = max(maxA, pathA[j]);
            }
            return make_pair(minA, maxA);
        }
    }
    return make_pair(-1, -1);
}

int main() {
    int N;
    cin >> N;
    vector<int> values(N);
    for (int i = 0; i < N; i++) {
        cin >> values[i];
    }
    int A, B;
    cin >> A >> B;
    
    TreeNode* root = NULL;
    for (int val : values) {
        root = insert(root, val);
    }
    
    vector<int> pathA, pathB;
    findPath(root, A, pathA);
    findPath(root, B, pathB);
    
    pair<int, int> result = findMinMax(pathA, pathB);
    cout << result.first << " " << result.second << endl;
    
    return 0;
}
