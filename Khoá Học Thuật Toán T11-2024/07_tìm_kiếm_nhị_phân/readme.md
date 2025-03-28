Cho dãy đã sắp xếp không giảm
Kiểm tra xem trong dãy có số x hay không
Đưa ra YES/ NO

 10 8
 Dãy a:	 1 2 3 4 4 4 5 6 7 8
	
[1, 10]
a[5] = 4, 4 < 8
[6, 10]
a[8] = 6, 6 < 8
[9, 10]
a[9] = 7, 7 < 8
[10, 10]
a[10] = 8

l: phạm vi trái
r: phạm vi phải
[l, r]

Trong khi l <= r {
    m = (l + r) / 2;
    Nếu a[m] == x:
        Đưa ra YES
        Kết thúc
    Nếu a[m] < x:
        l = m + 1
    Nếu a[m] > x:
        r = m - 1
}
In ra NO

