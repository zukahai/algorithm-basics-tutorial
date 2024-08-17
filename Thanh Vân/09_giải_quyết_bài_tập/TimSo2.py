from math import *

t2 = int (input('Nhập T: '))

so = int (input('Nhập số: '))

k = ceil(t2 / so)
x = 10**(so - 1) + k - 1
tx = t2 - (k - 1) * so

output1 = str(x)[tx - 1]

print(output1)
print(x)




# so = 1

# while (t > 9 * 10 ** (so - 1) * so):
#     t -= 9 * 10 ** (so - 1) * so
#     so += 1

# print(t, so)