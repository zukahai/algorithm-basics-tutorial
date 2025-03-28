#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector <int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    string flag = "YES";

    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i - 1]) > 2)
        {
            flag = "NO";
            break;
        }
    }

    cout << flag;
    
}
