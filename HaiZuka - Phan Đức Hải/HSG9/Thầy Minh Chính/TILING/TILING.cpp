#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("TILING.INP");
    ofstream cout("TILING.OUT");
    
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i + j - 1 << " ";
        }
        cout << endl;
    }

}
