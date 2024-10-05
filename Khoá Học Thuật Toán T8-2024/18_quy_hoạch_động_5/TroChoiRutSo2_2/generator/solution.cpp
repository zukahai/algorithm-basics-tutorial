#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n, k;
    cin >> n >> k;

    if (n % (k + 1) == 0)
        cout << "Linh";
    else 
        cout << "Hai";

    
}
