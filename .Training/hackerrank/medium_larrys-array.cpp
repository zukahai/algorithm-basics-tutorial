#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> a);
vector <int> rotate(vector <int> a, int indexStart);

string check(vector<int> a) {
    for (int i = 0; i < a.size() - 2; i ++) {
        int indexMin = i;
        for (int j = i + 1; j < a.size(); j++) {
            indexMin = (a[indexMin] > a[j]) ? j : indexMin;
        }
        if (indexMin == a.size() - 1) {
            a = rotate(a, a.size() - 3);
            indexMin--;
        }
        for (int j = indexMin - 1; j >= i; j--)
            a = rotate(a, j);
    // printVector(a);
    }
    return (a[a.size() - 1] >= a[a.size() - 2] && a[a.size() - 2] >= a[a.size() - 3]) ? "YES" : "NO";
}

vector <int> rotate(vector <int> a, int indexStart) {
    int t = a[indexStart];
    a[indexStart] = a[indexStart + 1];
    a[indexStart + 1] = a[indexStart + 2];
    a[indexStart + 2] = t;
    return a;
}

void printVector(vector<int> a) {
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}

vector <int> a;
int main() {
    int n, t;
    cin >> t;
    while (t--) {
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << check(a) << endl;
    }
}