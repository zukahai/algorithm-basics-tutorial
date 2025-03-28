n = 6
a = [1, 3, 2, 3, 6, 4]

m = {}
for x in a:
    if x in m:
        m[x] += 1
    else:
        m[x] = 1

m = sorted(m.items(), key=lambda x: x[0])

sum = 0
p = {}

for k, v in m:
    p[k] = sum
    sum += v

for x in a:
    print(p[x])

#10: Giai nhi: 1^2 + 2^2 + ... + n^2 = n(n+1)(2n+1)/6
#11: Khuyến khích, -10^9 -> 10^9
#12: 20/20