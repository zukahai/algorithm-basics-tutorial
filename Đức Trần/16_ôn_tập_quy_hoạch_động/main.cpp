#include <bits/stdc++.h>
using namespace std;

string dp[1000000];
int a[1000000];

void uocSo(int num)
{
    int count = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            if (i != num)
            {
                a[count++] = i;
            }

            if (i != num / i && i != 1 && (num / i) != num)
            {
                a[count++] = num / i;
            }
        }
    }
    a[count] = 0;
}
int main()
{

    int n;
    cin >> n;

    dp[0] = "lose";
    dp[1] = "lose";

    for (int i = 2; i <= n; i++)
    {
        dp[i] = "lose";
        uocSo(i);
        for (int j = 0; a[j] != 0; j++)
        {
            
                int x = a[j];
                if (dp[x] == "lose")
                {
                    dp[i] = "win";
                    break;
                }
        }
    }

    if (dp[n] == "win")
    {
        cout << "Hai";
    }
    else
    {
        cout << "Linh";
    }

    return 0;
}
