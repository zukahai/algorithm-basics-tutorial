#include<bits/stdc++.h>
using namespace std;

bool songto(long long n){
    int squar = sqrt(n);
    if(n <= 1){
        return false;
    }
    for(int i = 2; i <= squar; ++i){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

vector <long long> a = {2, 3, 5, 7};
vector<long long> b = {1, 3, 7, 9};

int main(){
    int min;
    long long max;
    cin >> min;
    cin >> max;
    for(int i = 0 ; i < 4; i++){
        if(a[i] >= min and a[i] <= max){
            cout << a[i] << " ";
        }
    }
    
    int index = 0;
    while(a.back() <= max && index < a.size()){
        for(int i = 0; i < 4; i++){
            long long x = a[index] * 10 + b[i]; 
                if(songto(x) == true){
                    a.push_back(x);
                    if(x >= min and x <= max){
                        cout << x << " ";    
                    }
            }
        }
        index++;
    }

}
