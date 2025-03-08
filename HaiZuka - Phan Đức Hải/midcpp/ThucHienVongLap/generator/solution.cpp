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
    
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        cout << "So hien tai la " << i << ", gap doi cua " << i << " la " << 2 * i << '\n';
    }

}
