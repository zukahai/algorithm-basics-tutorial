#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
	int n;
	int m;
	cin >> n;
	cin >> m;
	vector<long long> a(n);
	for( int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	map<long long, int> b;
    // int b[10000000]
	for( int i = 0 ; i < n; ++i){
		b[a[i]]++;
	}
	long long step = 0;
    // 1 1 3 4 4
    // x.first = 1, x.second = 2
	for( pair <long long, int>x : b){
		if (b.find(m - x.first) != b.end()){
			step += x.second*b[m - x.first];
            b[m - x.first] = b[x.first] = 0;
		}
	} 
	cout << step;
}
