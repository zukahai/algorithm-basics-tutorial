#include<bits/stdc++.h>
using namespace std;
int n;
int a[100];

void deQuy(int index) {
    if (index > n) {
        for (int i = 1; i <= n; i++) {
            cout << a[i];
        }
        cout << endl;
        return;
    }
    for (int i = 0; i <= 1; i++) {
        a[index] = i;
        deQuy(index + 1);
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
