#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    int n;
    cin >> n;
    vector<int> a(n);
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != 4 && a[i] != 7)
            flag = 1;
    }

    if (flag)
    {
        cout << "NO";
        return 0;
    }

    cout << "YES";

}
