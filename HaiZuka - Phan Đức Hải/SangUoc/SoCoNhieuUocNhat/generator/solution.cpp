#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    int n;
    cin >> n;
    vector<int> b(n + 1, 1);
    for (int i = 2; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            b[j]++;
        }
    }

    int max = 0;
    int index = 0;
    for (int i = 1; i <= n; i++) {
        if (b[i] >= max) {
            max = b[i];
            index = i;
        }
    }

    cout << index << " " << max;

}
