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
        cin >> a[i];

    int flag = -1;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
            flag = 1;
        }
    
    if (flag == -1)
        cout << "-1";
}
