#include<bits/stdc++.h>
using namespace std;

int dequy(int x, int n){
    if(x == n){
        return 1;
    }
    if(x > n){
        return 0;
    }
    
    int count1 = dequy(2*x,n);
    int count2 = dequy(3*x+1,n);
    return count1 + count2;
}

int main(){
    int n;
    cin>>n;
    int k = dequy(1,n);
    cout << k;
    return 0;
}