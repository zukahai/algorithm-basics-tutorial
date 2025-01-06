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
            if (s[i] != '0') {
                s[i] = s[i] - 1;
                for (int j = i + 1; j < s.size(); j++)
                {
                    s[j] = '9';
                }
                cout << s;
                return 0;
            }  else {
                int index = -1;
                for (int j = i - 1; j >= 0; j--)
                {
                    if (s[j] != '1') {
                        index = j;
                        break;
                    }
                }
                if (index == -1) {
                    for (int j = 0; j < s.size() - 1; j++)
                    {
                        cout << '9';
                    }
                    return 0;
                } else {
                    s[index] = s[index] - 2;
                    for (int j = index + 1; j < s.size(); j++)
                    {
                        s[j] = '9';
                    }
                    cout << s;
                    return 0;
                }
            }
        }
    }
    cout << s;
    return 0;
}
