
Tìm số xuất hiện nhiều nhất trong dãy
(1 <= n <= 10^6)
5
1 2 1 2 1
Kết quả là 1






O(nlogn)

8
1 1 2 1 2 1 4 5

b[1] = 4
b[2] = 2
b[3] = 0
b[4] = 1
b[5] = 1

for (int i = 1; i <= n; i++) {
	

Gặp số k thì tăng b[k] thêm 1
Gặp số a[i] thì tăng b[a[i]] thêm 1

int b[1000006]
b[k]: số lượng số k trong dãy



Cho dãy a gồm n phần tử

In ra những số chỉ xuất hiện 1 lần trong dãy
Theo thứ tự nhập

7
1 2 2 5 3 5 6
Kết quả là: 1 3 6

