5 6
4 3 2 1 4

L = 2

Bắt đầu: i
Kết thúc: i + L - 1
số phần tử: L

bool check(vector<int> a, int L) {
    int n = a.size();
    for (int i = 0; i <= n - L; i++) {
        long long sum = 0;
        for (int j = i; j <= i + L - 1; j++) {
            sum += a[j];
        }
        if (sum < m) {
            return false;
        }
    }
    return true;
}

Nhập vào một dãy số a, và một số nguyên m. Tìm ra dãy con có m phần tử liên tiếp có tổng lớn nhất.

Nếu có nhiều đáp án, in ra dãy cuối cùng.

Ví dụ:
5 3
2 1 3 4 0
Kết quả là: 1 3 4

Ví dụ:
5 3
2 1 3 0 3
Kết quả là: 3 0 3


Nhập vào một dãy số a.
Tính tổng dãy con từ L đến R.

Đầu vào:
Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10^6)
Dòng thứ hai chứa n số nguyên a1, a2, ..., an (0 ≤ ai ≤ 10^9)
Dòng thứ ba chứa số nguyên q (1 ≤ q ≤ 10^6)
q dòng tiếp theo, mỗi dòng chứa 2 số nguyên L, R (1 ≤ L ≤ R ≤ n)

Đầu ra:
In ra q dòng, mỗi dòng chứa tổng dãy con từ L đến R.

Ví dụ:

Input
5
2 1 3 4 0
2
1 3
3 5

Output
6
7


5
  2 1 3  4  0
0 2 3 6 10 10
3 10
p[10] = a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8] + a[9] + a[10]
3 10: p[10] - p[2]
6 10: p[10] - p[5]
1 10: p[10] - p[0]
L R: p[R] - p[L - 1]