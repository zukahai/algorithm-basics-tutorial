#include<bits/stdc++.h>
using namespace std;

vector<bool> checkCol(1000, true);;
int n;
int a[1000];
bool check = true;
int countD = 0;

void deQuy(int index) {
    if (index > n) {
        countD++;
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (checkCol[i]) {
            a[index] = i;
            checkCol[i] = false;
            deQuy(index + 1);
            checkCol[i] = true;
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
    cout << countD << endl;

}
