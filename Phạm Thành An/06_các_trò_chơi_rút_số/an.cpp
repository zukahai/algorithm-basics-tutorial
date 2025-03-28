#include<bits/stdc++.h>
using namespace std;

vector<int> LayUoc(int n){
    vector<int> res;
    for(int i = 1; i <= sqrt(n);i++){
        if (n%i==0){
            res.push_back(n/i);
            res.push_back(i);
        }
    }
    return res;
}

int main(){
    int k;
    cin >> k;
    vector<string> dp(k+4);
    dp[1]="Win";
    for(int i = 2; i <= k; i++){
        dp[i]="Lose";
        vector<int> csrut = LayUoc(i);
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
