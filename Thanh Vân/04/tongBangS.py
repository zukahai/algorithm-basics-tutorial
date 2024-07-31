a = [1, 1, 3, 3, 3, 2, 2, 2, 4]
s = 4

b = {}

for x in a:
    if x in b:
        b[x] += 1
    else:
        b[x] = 1
print(b)
dem = 0
for x in a:
    if s - x in b:
        dem += b[s - x]
    if s - x == x:
        dem -= 1

print(dem // 2)

        

'''
dem = 0
a[0]: 1 -> xét 4 - 1 = 3, dem += b[3] | dem = 3
a[1]: 1 -> xét 4 - 1 = 3, dem += b[3] | dem = 6
a[2]: 3 -> xét 4 - 3 = 1, dem += b[1] | dem = 8
a[3]: 3 -> xét 4 - 3 = 1, dem += b[1] | dem = 10
a[4]: 3 -> xét 4 - 3 = 1, dem += b[1] | dem = 12
a[5]: 2 -> xét 4 - 2 = 2, dem += b[2] | dem = 15 - 1 = 14
a[6]: 2 -> xét 4 - 2 = 2, dem += b[2] | dem = 17 - 1 = 16
a[7]: 2 -> xét 4 - 2 = 2, dem += b[2] | dem = 19 - 1 = 18
'''