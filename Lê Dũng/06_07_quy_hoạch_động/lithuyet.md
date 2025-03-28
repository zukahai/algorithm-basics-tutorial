Cho một mảng a gồm n phần tử, tìm dãy con liên tiếp tăng dài nhất.

6
7 1 3 5 2 4

**f[k]**: Độ dài dãy con liên tiếp tăng dài nhất kết thúc tại chỉ số k

f[0] = 1
f[1] = 1
f[2] = 2
f[3] = 3
f[4] = 1
f[5] = 2

f[0] = 1 

Từ k = 1 trở đi:
Nếu a[k] > a[k - 1]:  f[k] = f[k - 1] + 1
Nếu a[k] <= a[k - 1]: f[k] = 1


