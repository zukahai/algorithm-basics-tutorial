#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string a, b;
    cin >> a >> b;

    if (a > b)
        cout << a;
    else
        cout << b;
    
}
