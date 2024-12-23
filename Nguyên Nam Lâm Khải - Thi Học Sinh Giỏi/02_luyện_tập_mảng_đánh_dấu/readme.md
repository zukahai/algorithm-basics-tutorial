Cho 1 dãy a gồm n số
Đếm xem có bao nhiều cặp
a[i] = a[j], (i < j)

(0 < n <= 10^6, -10^18 < a[i] < 10^18)

int b[10000009]

Ví dụ
5
2 4 4 2 2
Thì kết quả là 4
b[2] = 3
b[4] = 2

for (auto x: b) {
	sum += x.sencond * (x.sencond - 1) / 2;
}

sum = 4
sum += b[2] * (b[2] - 1) / 2
sum += b[4] * (b[4] - 1) / 2


Xét số 2 đầu tiên: 4 cặp
Xét số 2 thứ 2: 3 cặp
Xét số 2 thứ 3: 2 cặp 
Xét số 2 thứ 4: 1 cặp 

Có 5 số 2 thì số cặp bằng nhau
1 + 2 + 3 + 4
Có x số 2 thì số cặp bằng nhau là:
1 + 2 + 3 + ... + (x - 1)
= x * (x - 1) / 2

1 + 2 + 3 ... + n = n * (n + 1) / 2

Tổng quát

map<long long, int> b;

for i : 1 tới n
	b[a[i]]++;

res = 0;
for i: 1 tới n
	if (b[a[i]] != 0) {
		res += b[a[i]] * (b[a[i]] - 1) / 2
		b[a[i]] = 0;
	}

In ra res


--------------------------------------------------

Cho 1 dãy a gồm n số nguyên, và một số nguyên S
Đếm xem trong dãy có bao nhiêu cặp a[i] + a[j] = s
(i < j)

(1 <= n <= 10^6), (-10^18 <= a[i] <= 10^18)

Ví dụ
9 5
2 2 2 2 3 3 3 0 12

Kết quả:
res += b[2] * b[3] 

Có 4 số 2
Có 3 số 3

Để tạo thành số s

Thì x phải kết hợp với s - x

b[x]: số lần xuất hiện của x
b[s - x]: số lần xuất hiện của s - x



Nếu x == s - x
	res += b[x] * (b[x] - 1) / 2
Ngược lại:
	res += b[x] * b[s - x]
b[x] = b[s - x] = 0


5 6
3 3 3 3 3
4 + 3 + 2 + 1

-----------------------------------------------------

Cho 1 dãy a gồm n số nguyên
Đếm xem trong dãy có bao nhiêu cặp a[i] + a[j] chia hết cho 3
(i < j)

(1 <= n <= 10^6), (0 <= a[i] <= 10^18)


5
3 6 4 2 9 ...

Kết quả: ...

3a + 1 + 3b + 2

Tìm số cặp x + y chia hết cho 3
x: chia hết cho 3 thì y phải chia hết cho 3
x chia 3 dư 1, thì y phải chia 3 dư 2


9
3 6 9 12 4 7 2 5 8

d0: 4
d1: 2
d2: 3

res = d1 * d2 + d0 * (d0 - 1) / 2

--------------------------------------------------------
Cho 1 dãy a gồm n số nguyên, và một số nguyên dương K
Đếm xem trong dãy có bao nhiêu cặp a[i] + a[j] chia hết cho K
(i < j)

(1 <= n <= 10^6), (0 <= a[i] <= 10^18)
(1 <= k <= 10^18)


9 7
7 14 21 1 6 2 5 3 15

x + y chia hết cho 7 khi nào:
- x chia 7 dư 0, thì y chia 7 dư 0
- x chia 7 dư 1, thì y chia 7 dư 6
- x chia 7 dư 2, thì y chia 7 dư 5
- x chia 7 dư 3, thì y chia 7 dư 4

x + y chia hết cho K khi nào:
- x chia k dư 0 thì y chia k dư 0
- x chia k dư 1 thì y chia k dư K - 1
- x chia k dư 2 thì y chia k dư k - 2
- x chia k dư 3 thì y chia k dư k - 3

- Đếm số lượng số chia K dư 0
- Đếm số lượng số chia K dư 1
- Đếm số lượng số chia K dư 2
...
- Đếm số lượng số chia K dư K - 1

map<long long> b;
b[0]: Số lượng chia k dư 0
b[1]: Số lượng chia k dư 1
b[2]: Số lượng chia k dư 2
...
b[k - 1]: Số lượng chia k dư k - 1

Nếu gặp a[i] thì tăng b[a[i] % k]++

b[0] * (b[0] - 1) / 2 + b[1] * b[k - 1] + b[2] * b[k - 2]

for (auto...)
if x.first == 0:
	sum += b[x.frist] * (b[x.frist] - 1)
else: b[x.first] * b[k - x.frist]

b[x.first] = b[k - x.frist] = 0

-----------------------------------------------------

Cho một dãy số a gồm n số nguyên và một số nguyên k. 
Đếm số lượng cặp số (i,j) thỏa mãn:
1. i < j
2. a[i] * a[j] chia hết cho k

(1 ≤ n ≤ 10^5), (1 ≤ k ≤ 10^5), (1 ≤ a[i] ≤ 10^9)

Ví dụ:
Input:
6 4
2 4 3 8 6 10

Output:
7

Giải thích:
Các cặp số thỏa mãn là:
- (2,4): 2 * 4 = 8 chia hết cho 4
- (2,8): 2 * 8 = 16 chia hết cho 4
- (2,6): 2 * 6 = 12 chia hết cho 4
- (4,8): 4 * 8 = 32 chia hết cho 4
- (4,6): 4 * 6 = 24 chia hết cho 4
- (3,8): 3 * 8 = 24 chia hết cho 4
- (8,10): 8 * 10 = 80 chia hết cho 4

Hướng dẫn:
1. Với mỗi số a[i], tìm ước số của k mà khi nhân với a[i] sẽ chia hết cho k
2. Sử dụng mảng đánh dấu để đếm số lượng phần tử có thể ghép cặp với a[i]
3. Lưu ý xử lý trường hợp số chia hết cho k

Code mẫu:
```cpp
map<long long, int> cnt;
long long res = 0;

// Đếm số lượng phần tử theo số dư khi chia cho k
for(int i = 0; i < n; i++) {
    cnt[a[i] % k]++;
}

// Xử lý từng cặp số
for(int i = 0; i < n; i++) {
    // Giảm số lượng phần tử hiện tại đi 1 để không tính trùng
    cnt[a[i] % k]--;
    
    // Tìm các số có thể ghép cặp với a[i]
    for(int j = 0; j < k; j++) {
        if((a[i] * j) % k == 0) {
            res += cnt[j];
        }
    }
}

cout << res << endl;
```