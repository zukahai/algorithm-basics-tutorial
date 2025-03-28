Dãy con liên tiếp


6
1 2 4 6 2 10

Dãy con liên tiếp:
- Chỉ số đầu của dãy con
- Chỉ số cuối của dãy con
- Số lượng phần tử của dãy con

Số lượng = chỉ số cuối - chỉ số đầu + 1
chỉ số đầu = chỉ số cuối - số lượng + 1
chỉ số cuối = chỉ số đầu + số lượng - 1



6
1 2 4 6 2 10

Liệt kê các dãy con kết thúc tại chỉ số 3
1 2 4 6
2 4 6
4 6
6


Cho mỗi dãy a, in ra dãy con tăng dài nhất
6
1 2 4 6 2 10

dp[i]: độ dài của dãy con tăng
dài nhất kết thúc tại i

9
3 1 2 5 0 4 7 9 4
1 1 2 3 1 2 3 4 1

dp[7] = 4



int max = dp[0];
int csmax = 0;

for (int i = 0; i < n; i++)
	if (max < dp[i]) {
		max = dp[i];
		csmax = i;
	}

số lượng: max
chỉ số cuối: csmax;
chỉ số đầu start = max - csmax + 1


Tìm dãy con tăng dài nhất
Ví dụ:
9
3 1 2 5 0 4 7 9 4
Kết quả: 0 4 7 9

- chỉ số đầu
- chỉ số cuối
- số lượng


Tìm dãy con gồm các phần tử giống nhau dài nhất

Ví dụ:
11
1 1 2 2 2 0 0 0 0 4 4
Kết quả: 0 0 0 0

dp[i]: độ dài của dãy con gồm các phần tử giống nhau dài nhất
kết thúc tại i

11
a:  1 1 2 2 2 0 0 0 0 4 4
dp: 1 2 1 2 3 1 2 3 4 1 2

dp[1] = 1
if (a[i] == a[i - 1])
	dp[i] = dp[i - 1] + 1;
else 
	dp[i] = 1;


Tìm dãy con gồm tất cả các số là số chẵn dài nhất
Nếu không có thì in ra -1


Ví dụ:
	9
	1 2 4 6 2 1 2 0 6
	0 1 2 3 4 0 1 2 3
Kết quả: 2 4 6 2

	7
	2 4 1 8 6 0 1
	1 2 0 1 2 3 0
Kết quả 8 6 0

	4
	1 7 9 1
	0 0 0 0
Kết quả là -1

dp[i]: độ dài của dãy con gồm tất cả các số là số chẵn
dài nhất kết thúc tại i

Nếu a[0] chẵn dp[0] = 1
Ngược lại dp[0] = 0

Nếu a[i] chẵn:
	dp[i] = dp[i - 1] + 1
Ngược lại:
	dp[i] = 1

