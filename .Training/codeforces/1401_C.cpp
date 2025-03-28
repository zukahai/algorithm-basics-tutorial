/*
https://codeforces.com/contest/1401/problem/C
*/
#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int a[100005], b[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    for(;t--;)
    {
	int k = 0, m = 1000000000, n;

	cin >> n;

	for(int i = 0; i < n; i++)
	{
	    cin >> a[i];
            b[i] = a[i];
	    m = min(m, a[i]);
	}

        sort(b, b + n);

	for(int i = 0; i < n; i++)
	    if(a[i] != b[i] && a[i] % m > 0)
		k = 1;

	if(k)
	    cout<<"NO"<<endl;
	else
	    cout<<"YES"<<endl;
    }
}