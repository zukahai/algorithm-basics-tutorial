#include <bits/stdc++.h>

using namespace std;

const int Nmax = 1e6 + 5;
// vector<int> a(Nmax + 1, 1);

// void sangUoc() {
//     a[0] = 0;
//     for (int i = 2; i <= Nmax; i++) {
//         for (int j = i; j <= Nmax; j += i) {
//             a[j] += i;
//         }
//     }
//     for (int i = 0; i <= Nmax; i++) {
//         a[i] -= i;
//     }
// }



// int main() {
//     sangUoc();
//     vector<long long> b(Nmax + 1, 0);
//     b[0] = 0;
//     for (int i = 1; i <= Nmax; i++) {
//         b[i] = b[i - 1] + (a[i] >= i);
//     }
//     int t, l, r;
//     cin >> t;
//     while (t--) {
//         cin >> l >> r;
//         cout << b[r] - b[l - 1] << endl;
//     }
// }







// #include <bits/stdc++.h>
// using namespace std;

// int f[1000001];
// bool snt[1000001];
// vector <int> d;
// void sang(){
//     memset(f, 0, sizeof (f));
//     memset(snt, true, sizeof (snt));
//     snt[0] = snt[1] = false;
//     for (int i = 2; i <= 1e6 / 2; i++){
//         if (snt[i]){
//             d.push_back(i);
//             for (int j = i; j <= 1e6; j += i)
//                 f[j] += i, snt[j] = false;
//         }
//     }
// }

int main() {
    double sum = 0;
    for (int i = 1; i <= 1e6; i++) {
        sum += 1e6 / i;
    }
    cout << sum;
}