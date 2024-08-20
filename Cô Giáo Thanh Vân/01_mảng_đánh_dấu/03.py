import math

a = [100000000000000000000000, 2, 3]

a.sort()

print(a)

dem = 1
for i in range(1, len(a)):
    if a[i] == a[i - 1]:
        dem += 1
    else:
        print(a[i - 1], dem)
        dem = 1
print(a[-1], dem)

