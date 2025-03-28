# 1 3 2 1 3 6 7 2
a = [1, 3, 2, 1, 3, 6, 7, 2]

b = [1] * len(a)

for k in range(1, len(a)):
    if a[k] > a[k - 1]:
        b[k] = b[k - 1] + 1

length = 0
end = 0
for k in range(len(b)):
    if b[k] > length:
        length = b[k]
        end = k

start = end - length + 1

for i in range(start, end + 1):
    print(a[i], end=" ")