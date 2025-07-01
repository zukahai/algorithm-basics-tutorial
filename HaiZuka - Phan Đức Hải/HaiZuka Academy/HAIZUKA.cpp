#include<bits/stdc++.h>
using namespace std;

bool compare(vector<int> c, vector<int> d) {
    if (c[0] < d[0])
        return true;
    return false;
}

int main()
{
    #ifndef ONLINE_JUDGE
    ifstream cin("HAIZUKA.INP");
    ofstream cout("HAIZUKA.OUT");
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector <vector<int>> a(n, vector<int>(2));
    for (int i = 0; i < n; i++)
        cin >> a[i][0] >> a[i][1];

    sort(a.begin(), a.end(), compare);
    
    for (int i = 1; i < n; i++)
        if (a[i][0] <= a[i - 1][1]) {
            cout << "NO";
            return 0;
        }
    cout << "YES";
}
