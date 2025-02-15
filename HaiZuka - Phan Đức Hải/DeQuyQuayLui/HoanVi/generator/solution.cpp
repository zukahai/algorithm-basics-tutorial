#include<bits/stdc++.h>
using namespace std;

vector<bool> used(100, true);
vector<int> a(100, 0);
int n;

void deQuy(int index) {
    if (index > n) {
        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (used[i]) {
            a[index] = i;
            used[i] = false;
            deQuy(index + 1);
            used[i] = true;
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // Bài giải của bạn ở dưới đây
    
    cin >> n;
    deQuy(1);

}
