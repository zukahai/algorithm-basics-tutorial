#include<bits/stdc++.h>
using namespace std;


int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long n;
    cin >> n;

    vector<long long> p = {1, 3, 5, 7, 9};
    int index = 0;
    while (p.size() < n) {
        long long k = p[index];
        for (int i = 1; i <= 9; i += 2) {
            p.push_back(k * 10 + i);
        }
        index++;
    }

    cout << p[n - 1];


    
}
