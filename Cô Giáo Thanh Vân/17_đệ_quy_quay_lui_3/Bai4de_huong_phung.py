a = [1, 2, 3, 4, 5]

b = [0] * len(a)
b[0] = a[0]

for i in range(1, len(b)):
    if a[i] < b[i - 1]:
        b[i] = a[i]
    else:
        b[i] = b[i - 1]

max = -999999999999999999999

for j in range(1, len(a)):
    t = a[j] - b[j - 1]
    if t > max:
        max = t

print(max)