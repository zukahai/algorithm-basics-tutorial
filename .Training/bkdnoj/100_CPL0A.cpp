#include <bits/stdc++.h>

using namespace std;

double area(int x1, int y1, int x2, int y2, int x3, int y3) {
    return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;
}

bool checkInTriangle(int x1, int y1, int x2, int y2, int x3, int y3, int xTest, int yTest) {
    double areaSum = area(x1, y1, x2, y2, x3, y3);
    double area1 = area(x1, y1, x2, y2, xTest, yTest);
    double area2 = area(x2, y2, x3, y3, xTest, yTest);
    double area3 = area(x3, y3, x1, y1, xTest, yTest);
    return areaSum == (area1 + area2 + area3);
}

int main() {
    int x1, y1, x2, y2, x3, y3, xTest, yTest;
    int n;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> xTest >> yTest;
        count += checkInTriangle(x1, y1, x2, y2, x3, y3, xTest, yTest);
    }
   
    long long a10 = area(x1, y1, x2, y2, x3, y3) * 10;
    cout << fixed << setprecision(1) << a10 / 10.0 << endl;
    cout << count;
}