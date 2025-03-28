#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây

    vector<long long> dem(3, 0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dem[x % 3]++;
    }

    cout << dem[0] * (dem[0] - 1) / 2 + dem[1] * dem[2];
    


}
