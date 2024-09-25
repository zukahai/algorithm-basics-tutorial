n1 = 10
n2 = 1000

a = []

for i in range(1, 10):
    for j in range(i, 10):
        a.append(i * 10 + j)

index = 0
while (a[-1] <= n2):
    t = a[index]
    for i in range(t % 10, 10):
        a.append(t * 10 + i)
    index += 1

for x in a:
    if x >= n1 and x <= n2:
        print(x, end=' ')