#include<bits/stdc++.h>
using namespace std;

int x[100];
int n, k;

void deQuy(int index) {
    if (index > k) {
        for (int i = 1; i <= k; i++) {
            cout << x[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = x[index - 1] + 1; i <= n - k + index; i++) {
        x[index] = i;
        deQuy(index + 1);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // Bài giải của bạn ở dưới đây
    
    cin >> n >> k;
    x[0] = 0;
    deQuy(1);
}
