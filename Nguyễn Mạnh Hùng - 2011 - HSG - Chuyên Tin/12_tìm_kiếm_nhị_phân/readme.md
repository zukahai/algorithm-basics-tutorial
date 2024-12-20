# Tìm kiếm nhị phân

Cho một dãy số nguyên a
Đã được sắp xếp tăng dần
Tìm vị trí của số x trong dãy
Nếu không tìm thấy, thì in ra -1

10 12
1 2 2 3 3 4 4 5 5 8

l = 1, r = n

while (l <= r) {
	m = (l + r) / 2;
    Nếu a[m] == x:
        Đưa ra m
    Nếu a[m] < x:
        l = m + 1
    Nếu a[m] > x:
        r = m - 1
}


## Vị trí đầu tiên của x

Cho một dãy số nguyên a và một số nguyên x

Tìm vị trí đầu tiên của x trong dãy

Nếu không tìm thấy, thì in ra -1

10 2
1 1 2 2 2 2 3 4 5 8

l = 1, r = n
res = -1

while (l <= r) {
	m = (l + r) / 2;
    Nếu a[m] == x:
        res = m
        r = m - 1
    Nếu a[m] < x:
        l = m + 1
    Nếu a[m] > x:
        r = m - 1
}

In ra res

## Vị trí cuối cùng của x

Cho một dãy số nguyên a và một số nguyên x

Tìm vị trí cuối cùng của x trong dãy

Nếu không tìm thấy, thì in ra -1

10 2
1 1 2 2 2 2 3 4 5 8

Kết quả là 6

## Số đầu tiên lớn hơn x

Cho một dãy số nguyên a và một số nguyên x

Tìm vị trí số đầu tiên lớn hơn x trong dãy

Nếu không tìm thấy, thì in ra -1

10 2
1 1 2 2 2 2 3 4 5 8

Kết quả là 7

## Số cuối cùng bé hơn x

Cho một dãy số nguyên a và một số nguyên x

Tìm vị trí số cuối cùng bé hơn x trong dãy

Nếu không tìm thấy, thì in ra -1

10 3
1 1 2 2 2 2 3 4 5 8

Kết quả là 6