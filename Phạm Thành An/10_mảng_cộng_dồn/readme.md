7
2 -3 3 5 -5 7 -7 
2 -1 2 7  2 9  2

mp[2] = 4
n * (n - 1) / 2

Nếu d[s] = d[e]
a[s + 1] + ... + a[e] = 0

Đếm xem có bao nhiêu 
đoạn con liên tiếp có tổng bằng 0

d[k] tổng các phần tử từ a[1] tới a[k]
d[k] = d[k - 1] + a[k];


4
  -2 2 -3 3
0 -2 0 -3 0

--------------------------------------
Cho một dãy số gồm n phần tử
Đếm xem trong dãy bao nhiêu đoạn con có tổng chia hết cho 3
(1 <= n <= 10^6, |a[i]| <= 10^9)

Ví dụ:
5 
2 2 1 3 6
Kết quả là 5
Có 3 đoạn con là
[2, 3], [2, 4], [2, 5], [4, 4], [5, 5]

--------------------------------------
Cho một dãy số gồm n phần tử
Đếm xem trong dãy bao nhiêu đoạn con có tổng chia hết cho 3
(1 <= n <= 10^6, |a[i]| <= 10^9)

Ví dụ:
5 
2 2 1 3 6
Kết quả là 6
Có 6 đoạn con là
[2, 3], [2, 4], [2, 5], [4, 4], [4, 5], [5, 5]

5 
a:   2 2 1 3 6

d: 0 2 4 5 8 14
  2 1 2 2  2


2
3 6

3 9
0 0

--------------------------------------
Cho một dãy số gồm n phần tử
Đếm xem trong dãy bao nhiêu đoạn con có tổng chia hết cho 3
(1 <= n <= 10^6, |a[i]| <= 10^9)

Ví dụ:
5 
2 2 1 3 6
Kết quả là 6
Có 6 đoạn con là
[2, 3], [2, 4], [2, 5], [4, 4], [4, 5], [5, 5]

5 
a:   2 2 1 3 6

d: 0 2 4 5 8 14
  2 1 2 2  2


2
3 6

5
-1 -1  1 2 5
-1 -2 -1 1 6

Nếu x % 3 = b
(x + 3q) % 3 = b

(-5) % 3 = -2 


Chia 3 dư -2, kết hợp với chia 3 dư 1
Chia 3 dư -1, kết hợp với chia 3 dư 2

mp[1] += mp[-2]
mp[2] += mp[-1]

----------------------------------------------
Cho một dãy số gồm n phần tử
Đếm xem trong dãy bao nhiêu đoạn con có tổng bằng số S
(1 <= n <= 10^6, |a[i]|, |S| <= 10^9)

Ví dụ 1:

5 5
2 2 1 3 6

Kết quả là 2

Có 2 đoạn con là
[1, 3]

Ví dụ 2:
3 5
2 7 4

Kết quả là 0

Ví dụ 3:

-3  1 4 -2 3

-3 -2 2 0 3

Kết quả là 2

Có 2 đoạn con là
[2, 3], [3, 5]

6 5
8 2  2  1  3  6
8 10 12 13 16 22

d[4] - d[1] = 5

[1, 4] - [1, 1] = [2, 4]

d[i]
mp[d[i]]++;
count += mp[d[i] - s]

count += mp[x.frist - s]


3 5
8 -3 -2
8 5 3

----------------------------------------------

Đếm số lượng số nguyên tố từ a đến b
(1 <= a, b <= 10^7)

- Dòng đầu tiên chứa số nguyên t (1 <= t <= 10^5)
- t dòng tiếp theo, mỗi dòng chứa 2 số nguyên a, b

Ví dụ:
3
1 10
11 20
21 30

Kết quả:
4
4
2

----------------------------------------------

Cho một dãy số gồm n phần tử

Tìm đoạn con có tổng các số chẵn lớn nhất
(1 <= n <= 10^6, |a[i]| <= 10^9)

Ví dụ:

6
-3 4 2 -3 2 -5

Kết quả là 5
