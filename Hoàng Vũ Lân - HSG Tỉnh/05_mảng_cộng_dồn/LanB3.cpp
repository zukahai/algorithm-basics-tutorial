#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, k, d = 0, end;
    long long choose = 0;
    cin >> n >> k;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i]%2 == 1){
            d++;
            if(d == k){
                choose++;
                end = i;
                break;
            }
        }
    }

    for(int i = end+1; i < n; i++){
        choose++;
    }
    cout << choose;
}