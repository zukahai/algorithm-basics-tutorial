#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("STUDENTS.INP");
    ofstream cout("STUDENTS.OUT");


    map<int, vector<int>> mp;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    vector<int> res;
    
    while(k > 0) {
        for (map<int, vector<int>>::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++) {
            for (int i = 0; i < it->second.size(); i++) {
                if (k == 0) break;
                res.push_back(it->second[i]);
                k--;
            }
            if (k == 0) break;
        }
    }

    sort(res.begin(), res.end());

    for (int i = 0; i < res.size(); i++) {
        cout << a[res[i]];
    }
}
