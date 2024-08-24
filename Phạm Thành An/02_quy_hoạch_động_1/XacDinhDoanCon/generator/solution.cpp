#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector <long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int s, e, s2, l2, e3, l3;
    cin >> s >> e;
    cin >> s2 >> l2;
    cin >> e3 >> l3;

    int e2 = s2 + l2 - 1;
    int s3 = e3 - l3 + 1;

    for (int i = s; i <= e; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = s2; i <= e2; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = s3; i <= e3; i++)
        cout << a[i] << " ";
}
