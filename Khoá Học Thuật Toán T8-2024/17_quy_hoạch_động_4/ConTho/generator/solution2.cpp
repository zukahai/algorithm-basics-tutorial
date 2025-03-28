#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long sum = a[0];
    int index = 0;
    while (index < n)
    {
        if (index == n - 1)
        {
            break;
        }
        if (a[index + 1] > 0) {
            sum += a[index + 1];
            index ++;
        } else {
            if (a[index + 1]  > a[index + 2])
            {
                sum += a[index + 1];
                index += 1;
            } else {
                sum += a[index + 2];
                index += 2;
            }
        }


    }

    cout << sum;
    

    
}
