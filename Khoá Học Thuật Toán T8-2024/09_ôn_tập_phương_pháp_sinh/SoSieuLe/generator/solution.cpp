#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    vector <int> a = {1, 3, 5, 7, 9};
    int n;
    cin >> n;

    int index = 0;
    bool isRun = true;
    while(isRun) {
        int t = a[index];
        for (int i = 1; i <= 9; i += 2) {
            int k = t * 10 + i;
            if (k > n) {
                isRun = false;
                break;
            }
            a.push_back(k);
        }
        index++;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= n)
            cout << a[i] << " ";
    }
}
