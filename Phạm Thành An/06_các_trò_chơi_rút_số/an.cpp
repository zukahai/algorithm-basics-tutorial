#include<bits/stdc++.h>
using namespace std;

vector<long long> LayUoc(long long n){
    vector<long long> res;
    for(long long i = 1; i <= sqrt(n);i++){
        if (n%i==0){
            res.push_back(n/i);
            res.push_back(i);
        }
    }
    return res;
}

int main(){
    long long k;
    cin >> k;
    vector<string> dp(k+4);
    dp[1]="Win";
    for(long long i = 2; i <= k; i++){
        dp[i]="Lose";
        vector<long long> csrut = LayUoc(i);
        for (auto x:csrut){
            if (x != i){
                if (dp[x]=="Lose"){
                    dp[i]="Win";
                    break;
                }
            }
        }
    }
    if(dp[k]=="Win"){
        cout << "Hai";
    } else {
        cout << "Linh";
    }
    return 0;
}
