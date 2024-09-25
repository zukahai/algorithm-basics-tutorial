6
10 5 2 0 3 2

max = 10

aj - ai: lớn nhất

aj - ai
aj: sau
ai: trước

b[k]: số nhỏ nhất từ chỉ số 0 đến k

b[0] = a[0]
Nếu a[i] < b[i - 1]:
    b[i] = a[i]
Ngược lại:
    b[i] = b[i - 1]

6
10 5 2 0 3 2

max = 3

for j : từ 1 đến n:
    t = a[j] - b[j - 1]
    Nếu t > max:
        max = t

In ra max
