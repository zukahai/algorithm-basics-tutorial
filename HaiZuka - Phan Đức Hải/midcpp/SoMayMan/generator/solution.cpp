#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Không phải online judge sẽ đọc file input.txt, output.txt
    #ifndef ONLINE_JUDGE
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    #endif
    // Bài giải của bạn ở dưới đây
    
    int n;
    cin >> n;
    if (n % 10 == 4 || n % 10 == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }


}
