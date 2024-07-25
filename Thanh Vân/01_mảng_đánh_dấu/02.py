import math

a = [-2, 400000] # b[400000]

b = [0] * (max(a) - min(a) + 1)

for x in a:
    b[x] += 1

m = 0 # số xuất hiện nhiều nhất

for i in range(min(a), max(a) + 1):
    if b[i] > b[m]:
        m = i

print(m, b[m])

# b[k] đếm số lần xuất hiện của số k
# a = [3, 2, 3, 5, 5]
# b = [0, 0, 1, 2, 0, 2]

a = [-2,-2, -2, 1, 1, 3]
