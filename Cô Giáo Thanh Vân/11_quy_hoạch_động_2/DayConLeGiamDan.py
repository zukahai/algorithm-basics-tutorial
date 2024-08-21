a = [1, 9, 7, 5, 3, 2, 3]

b = [0] * len(a)

if a[0] % 2 == 0:
    b[0] = 0
else:
    b[0] = 1

for k in range(1, len(a)):
    if a[k] % 2 == 0:
        b[k] = 0
    else:
        if a[k] < a[k - 1]:
            b[k] = b[k - 1] + 1
        else:
            b[k] = 1

length = 0
end = 0
for k in range(len(b)):
    if b[k] > length:
        length = b[k]
        end = k

start = end - length + 1

for i in range(start, end + 1):
    print(a[i], end=" ")

if max(b) == 0:
    print(-1)