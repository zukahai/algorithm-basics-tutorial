#include<bits/stdc++.h>
using namespace std;

int compare(string a, string b)
{
    if (a.size() < b.size()) return -1;
    if (a.size() > b.size()) return 1;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < b[i]) return -1;
        if (a[i] > b[i]) return 1;
    }
    return 0;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    vector<string> gen;

    for (char ch = '1'; ch <= '9'; ch += 2)
    {
        for (char ch2 = '1'; ch2 <= '9'; ch2 += 2)
        {
            string s = "";
            s += ch;
            s += ch2;
            gen.push_back(s);
        }
    }

    vector <string>a = {"1", "3", "5", "7", "9"};

    int index = 0;

    string n;
    cin >> n;

    while (index < a.size() && compare(a.back(), n) <= 0)
    {
        string temp = a[index];
        for (int i = 0; i < gen.size(); i++)
        {
            string s = temp + gen[i];
            a.push_back(s);
        }
        index++;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (compare(a[i], n) <= 0)
        {
            cout << a[i] << " ";
        }
    }
    
}
