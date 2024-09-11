#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] % 2 == 0)
        {
            s[i]++;
            for (i = i + 1; i < s.size(); i++)
            {
                s[i] = '1';
            }
            break;
        }
    }

    cout << s;
    
}
