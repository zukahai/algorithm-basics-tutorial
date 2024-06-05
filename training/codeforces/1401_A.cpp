/*
https://codeforces.com/contest/1401/problem/A
*/
#include<bits/stdc++.h>

#define endl '\n'

using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k, n, t;

    cin >> t;
    for(;t--;)
    {
        cin >> n >> k;

        if(n < k)
            cout << k - n << endl;

        else if(n % 2 == k % 2)
            cout << 0 << endl;

        else
            cout << 1 << endl;
    }

    return 0;
}