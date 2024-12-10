#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int, int> cnt;
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }

    int index = 1;
    while (cnt[index] > 0)
    {
        index++;
    }

    cout << index << endl;


}
