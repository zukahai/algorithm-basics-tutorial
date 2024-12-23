#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    int n, k, p;
    cin >> n >> k >> p;
    long long count = n / (k + 1);
    long long countPen = count * k;
    countPen += (n - count * (k + 1));
    long long price = countPen * p;
    cout << price;
}
