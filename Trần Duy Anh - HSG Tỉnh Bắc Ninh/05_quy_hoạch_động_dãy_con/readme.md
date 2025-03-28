8
  1 -2 3 -1 2 -2 -3
0 1 -1 2  1 3  1 -2

unodered_map <ll, ll> left;
unodered_map <ll, ll> right;
left[k]: vị trí đầu tiên của k trong p
right[k]: vị cuối cùng tiên của k trong p

for (int i = 0; i < a.size(); i++) {
	if (left.find(p[i]) == left.end()) 
		left[p[i]] = i;
	right[p[i]] = i;
}

int max = 0;
int resL = 0;
int resR = 0;

for (int x: p) {
	if (right[x] - left[x] > max) {
		max = right[x] - left[x];
		resL = left[x] + 1;
		resR = right[x];
	}
}






Tìm dãy con liên tiếp tăng dài nhất
trong dãy a

Ví dụ:
10
1 2 7 1 4 6 7 9 1 9
Kết quả là: 1 4 6 7 9

10
a:  1 2 7 1 4 6 7 9 1 9
dp: 1 2 3 1 2 3 4 5 1 2

dp[0] = 1
Nếu a[i - 1] < a[i]:
	dp[i] = dp[i - 1] + 1
Ngược lại:
	dp[i] = 1;

dp[7] = 5, lớn nhất
Kết thúc tại vị trí 7
độ dài: 5

dp[k] độ dài dãy con tăng dài nhất
kết thúc tại vị trí k

độ dài = cuối - đầu + 1
đầu = cuối - độ dài + 1


Tìm dãy con liên tiếp toàn số chẵn dài nhất
trong dãy a.
In ra dãy dài nhất, nếu không có dãy chẵn nào thì in ra -1

Ví dụ:
10
1 2 4 2 1 6 8 0 10 9
Kết quả là: 6 8 0 10

Ví dụ:
4
1 3 1 7

10
1 2 4 2 1 6 8 0 10 9
0 1 2 3 0 1 2 3  4 0

p[k]: độ dài của dãy con toàn số chẵn
Kết thúc tại k

Nếu a[0] chẵn
p[0] = 1
Ngược lại p[0] = 0

Nếu a[i] chẵn:
p[i] = p[i - 1] + 1
Ngược lại:
p[i] = 0

Tìm dãy con liên tiếp toàn số giống nhau
In ra dãy dài nhất, nếu có nhiều dãy dài bằng nhau thì in ra dãy cuối cùng

Ví dụ:
11
1 1 4 4 4 3 3 3 3 5 5
Kết quả là: 3 3 3 3

Ví dụ
10
4 4 2 2 2 1 1 1 8 8
Kết quả là: 1 1 1

Tìm dãy con liên tiếp toàn số lẻ tăng dài nhất
Nếu không có dãy nào thì in ra -1
Ví dụ:
9
1 2 3 4 5 7 9 2 3
Kết quả là: 5 7 9

Ví dụ:
4
2 4 8 0
Kết quả là -1

Tìm dãy số chính phương tăng dài nhất
Nếu không có in ra -1
Ví dụ:
6
4 1 4 9 10 16
Kết quả là: 1 4 9
Ví dụ:
5
2 6 2 5 10
Kết quả là: -1


