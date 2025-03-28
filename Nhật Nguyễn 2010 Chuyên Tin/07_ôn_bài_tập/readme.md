4 10
5 7 1 3


map <int, int> mp;
mp[x]: Chính là chỉ số của x trong mảng a

for (int i = 1; i <= n; i++) {
	if (mp[s - a[i]] != 0) {
		cout << mp[s - a[i]] << " " << i;
		return 0;
	}
	mp[a[i]] = i;
}


-----------------------------------------------------
Cho một dãy a gồm n số nguyên
Tìm hai chỉ số i và j, sao cho
j - i là lớn nhất, và a[i] = a[j]
Nếu có nhiều cặp j - i lớn nhất thì in ra cặp đầu tiên

(1 <= n <= 10<sup>6</sup>, |a[i]| <= 10<sup>18</sup>)

Ví dụ 1:
5
1 2 3 3 2
Kết quả là 2 5

Ví dụ 2:
5
4 2 4 2 5
Kết quả là 1 3

Ví dụ 3
5
1 2 3 4 5
Kết quả là 1 1

Ví dụ 4:
6
1 2 1 4 5 1
Kết quả là 1 6

--------------------------------------------
Cho một dãy a gồm n số nguyên
Đếm xem trong dãy có bao nhiêu bộ số (i, j)
Sao cho a[i] = a[j] và i < j

Ví dụ 1:
5
1 2 3 3 2
Kết quả là 2
2 cặp là (2, 5) và (3, 4)

Ví dụ 2:
5
4 4 4 2 2
Kết quả là 4
4 cặp là (1, 2), (1, 3), (2, 3), (4, 5)

Ví dụ 3:
5
1 2 3 4 5
Kết quả là 0

Ví dụ 4:
4
1 1 1 1
Kết quả là 6
6 cặp là (1, 2), (1, 3), (1, 4), (2, 3), (2, 4), (3, 4)

-------------------------------------------------------
## Mua gấu

Một cửa hàng gấu đang có N con gấu bông.
Nhưng còn gấu cùng loại thì sẽ có con số giống nhau.

Hải muốn mua nhiều gấu bông nhất có thể, Mỗi loại Hải sẽ mua với số lượng như nhau. Kiểm tra xem Hải có thể mua được tối đã bao nhiêu con gấu.

Đầu vào:
- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10^5)
- Dòng thứ hai chứa N số nguyên a1, a2, ..., aN (1 ≤ ai ≤ 10^5)

Đầu ra:

In ra số lượng gấu bông tối đa mà Hải có thể mua được.

Ví dụ:

| Input | Output |
|-------|--------|
| 8 <br> 1 1 2 2 3 3 3 4 | 6 |

**Giải thích:** 
- Có 2 con gấu loại 1
- Có 2 con gấu loại 2
- Có 3 con gấu loại 3
- Có 1 con gấu loại 4

- Nếu mua mỗi loại 1 con thì được 4 con
- Nếu mua mỗi loại 2 con thì được 6 con
- Nếu mua mỗi loại 3 con thì được 3 con
