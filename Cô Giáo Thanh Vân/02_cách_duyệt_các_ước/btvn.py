a = [1, 1, 4, 4, 4, 5]
s = 5

b = [0] * (max(max(a) - min(0, min(a)), s) + 1)

for x in a:
    b[x] += 1

c = 0
for x in a:
    c += b[s - x] # c = c + b[s - x]
    if s - x == x:
        c -= 1

print(c // 2)

# O(n)| n = 10^8
# O(n^2)| n = 10^4
# O(sqrt(n))| n = 10^16