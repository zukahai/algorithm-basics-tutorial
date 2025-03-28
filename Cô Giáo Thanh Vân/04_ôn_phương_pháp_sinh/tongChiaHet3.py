a = [3, 6, 9, 1, 4, 7, 2, 5]

b = {}
# key: a[i] % 3, x % 3
# value: số lần xuất hiện của a[i] % 3

for x in a:
    if x % 3 in b:
        b[x % 3] += 1
    else:
        b[x % 3] = 1

sum = b[0] * (b[0] - 1) // 2 + b[1] * b[2]
print(sum)