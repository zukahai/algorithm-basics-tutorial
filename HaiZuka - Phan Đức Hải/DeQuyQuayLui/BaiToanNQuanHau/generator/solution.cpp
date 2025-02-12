#include<bits/stdc++.h>
using namespace std;

vector<bool> check1(1000, true);
vector<bool> check2(1000, true);
vector<bool> check3(1000, true);
int n;
int a[1000];
bool check = true;

void deQuy(int index) {
    if (index > n) {
        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        check = false;
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (check1[i] && check2[index + i] && check3[index - i + n]) {
            a[index] = i;
            check1[i] = false;
            check2[index + i] = false;
            check3[index - i + n] = false;
            deQuy(index + 1);
            check1[i] = true;
            check2[index + i] = true;
            check3[index - i + n] = true;
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
    if (check) {
        cout << "NO SOLUTION";
    }

}
