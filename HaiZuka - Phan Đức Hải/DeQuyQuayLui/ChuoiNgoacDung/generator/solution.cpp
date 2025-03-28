#include<bits/stdc++.h>
using namespace std;
int n;

vector <char> a(100);

void deQuy(int index) {
    if (index > 2 * n) {
        bool check = true;
        int d = 0;
        for (int i = 1; i <= 2 * n; i++) {
            if (a[i] == '(') {
                d++;
            } else {
                d--;
            }
            if (d < 0) {
                check = false;
                break;
            }
        }
        if (check && d == 0) {
            for (int i = 1; i <= 2 * n; i++) {
                cout << a[i];
            }
            cout << endl;
        }
        return;
    }

    for (int i = 0; i <= 1; i++) {
        if (i == 0) {
            a[index] = '(';
        } else {
            a[index] = ')';
        }
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
