#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    string s;
    getline(cin, s);

    int flag = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cout << s[i];
            flag = 1;
        }
    }

    if (flag == 0)
    {
        cout << "-1";
    }

}
