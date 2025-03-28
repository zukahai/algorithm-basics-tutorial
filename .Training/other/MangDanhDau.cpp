#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n) {
    if (n < 2) 
        return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Trả về danh sách các ước nguyên tố của n
vector <long long> danhSachUoc(long long n) {
    vector <long long> res;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            res.push_back(i);
            if (i != n / i) {
                res.push_back(n / i);
            }
        }
    }
    sort(res.begin(), res.end());
    vector <long long> res2;
    for (int i = 0; i < res.size(); i++) {
        if (isPrime(res[i])) {
            res2.push_back(res[i]);
        }
    }
    return res2;
}

int main() {
    long long m, n;
    cin >> m >> n;
    vector <long long> uocM = danhSachUoc(m);
    vector <long long> uocN = danhSachUoc(n);

    map <long long, int> mapUocM;
    map <long long, int> mapUocN;

    for (int i = 0; i < uocM.size(); i++) {
        long long M = m;
        while (M % uocM[i] == 0) {
            mapUocM[uocM[i]]++;
            M /= uocM[i];
        }
    }

    for (int i = 0; i < uocN.size(); i++) {
        long long N = n;
        while (N % uocN[i] == 0) {
            mapUocN[uocN[i]]++;
            N /= uocN[i];
        }
    }

    int count = 0;
    for (auto it = mapUocM.begin(); it != mapUocM.end(); it++) {
        count += abs(it->second - mapUocN[it->first]);
    }

    for (auto it = mapUocN.begin(); it != mapUocN.end(); it++) {
        if (mapUocM.find(it->first) == mapUocM.end()) {
            count += it->second;
        }
    }

    cout << count;

}