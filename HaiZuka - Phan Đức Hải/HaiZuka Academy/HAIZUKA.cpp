#include<bits/stdc++.h>
using namespace std;

int a[20], b[20];

int main()
{
    #ifndef ONLINE_JUDGE
    ifstream cin("HAIZUKA.INP");
    ofstream cout("HAIZUKA.OUT");
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    long long n, N;
    cin >> n;
    N = n;
    int index = 0;
    while (n > 0) {
        int digit = n % 10;
        a[index] = digit;
        index++;
        n /= 10;
    }
    int index2 = 0;
    for (int i = index - 1; i >= 0; i--) {
        b[index2] = a[i];
        index2++;
    }

    long long t = 0;
    for (int i = 0; i < index; i++)
        t = t * 10 + 4;
    
    if (t > N) {
        for (int i = 1; i <= index - 1; i++) {
            cout << 7;
        }
        return 0;
    }

    int indexF = -1;
    for (int i = 0; i < index; i++) {
        if (b[i] != 4 && b[i] != 7) {
            indexF = i;
            break;
        }
    }
    if (indexF == -1) {
        cout << N;
        return 0;
    }

    int indexB = -1;
    for (int i = indexF; i >= 0; i--) {
        if (b[i] > 4) {
            indexB = i;
            break;
        }
    }
    if (b[indexB] > 7)
        b[indexB] = 7;
    else
        b[indexB] = 4;
    for (int i = indexB + 1; i < index; i++)
        b[i] = 7;
    
    for (int i = 0; i < index; i++)
        cout << b[i];
}
