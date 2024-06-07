#include <bits/stdc++.h>

using namespace std;

int trap(vector<int> height) {
    int im1 = 0;
    int im2 = 0;
    int ans = 0;
    for (int i = 1; i < height.size(); i++)
        if (height[i] > height[im1]) {
            im1 = im2 = i;
        }
        else if (height[i] == height[im1]) {
            im2 = i;
        }
    for (int i = im1 + 1; i <= im2 - 1; i++) {
        ans += height[im1] - height[i];
    }

    int t = height[0];
    for (int i = 0; i <= im1; i++) {
        if (height[i] > t)
            t = height[i];
        else
            ans += t - height[i];
    }

    t = height[height.size() - 1];
    for (int i = height.size() - 1; i >= im2; i--) {
        if (height[i] > t)
            t = height[i];
        else
            ans += t - height[i];
    }
    return ans;
}

int main() {
    vector<int> t = {4,2,0,3,2,5};
    cout << trap(t);
}