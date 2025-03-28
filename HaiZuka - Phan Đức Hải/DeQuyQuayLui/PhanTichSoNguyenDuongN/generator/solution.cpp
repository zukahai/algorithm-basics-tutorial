#include<bits/stdc++.h>
using namespace std;

int n;
int sum = 0;
int a[100];
void deQuy(int index) {
    if (sum == n) {
        for (int i = 1; i < index; i++) {
            cout << a[i];
            if (i < index - 1) cout << " + ";
        }
        cout << endl;
        return;
    }

    for (int i = a[index - 1]; i <= n - sum; i++) {
        a[index] = i;
        sum += i;
        deQuy(index + 1);
        sum -= i;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // Bài giải của bạn ở dưới đây
    a[0] = 1;
    cin >> n;
    deQuy(1);


}
