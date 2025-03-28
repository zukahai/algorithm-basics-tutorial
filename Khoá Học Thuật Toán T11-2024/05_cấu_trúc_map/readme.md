dem[x]: số lần xuất hiện của x

dem[10]: số lần xuất hiện của 10

dem[1000000000000000000]: ....

1 mảng tối đó chỉ lưu trữ được
khoảng 10^7

Áp dụng được cho 0 <= a[i] <= 10^7


map trong C++


Array:
i: chỉ số, 0 -> n - 1
a[i]: phần tử

map:
key: long long
value:

<key, value>

5
1 2 3 2 1000000000000000000 -1
dem[1] = 1
dem[2] = 2
dem[3] = 1
dem[1000000000000000000] = 1

{1, 1}, {-1, 1}, {2, 2}, {3, 1}, {1000000000000000000, 1}

dem[1]: O(NlogN)

unorder_map



Cho mỗi dãy a gồm n số nguyên
Đếm xem có bao nhiều cặp a[i] == a[j], (i < j)
(1 <= n <= 10^6, |a[i]| <= 10^9)

Ví dụ
5
1 2 1 2 1 

1: 3 * (3 - 1) / 2 = 3
2: 2 * (2 - 1) / 2 = 1
Kết quả: 4

(a[0], a[2])
(a[0], a[4])
(a[2], a[4])
(a[1], a[3])


1 1 1 1 1: x số 1
1 + 2 + 3 + 4 + ... + (x - 1)
(x - 1) * x / 2

s = 1 + 2 + 3 + ... + n = n * (n + 1) / 2
s = n + (n - 1) + (n - 2) + ... + 2 + 1

2s = (n + 1) * n
s = n * (n + 1) / 2

dem[x]: số lần xuất hiện của x
sum += dem[x] * (dem[x] - 1) / 2

