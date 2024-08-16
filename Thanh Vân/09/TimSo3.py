

def timK(t2, so):
    if (t2 % so == 0):
        return t2 // so
    else:
        return t2 // so + 1

t = int (input('Nhập T: '))

so = 1

t2 = t
while (t2 > 9 * 10 ** (so - 1) * so):
    t2 -= 9 * 10 ** (so - 1) * so
    so += 1

print("T2 = ", t2)
print("So = ", so)

k = timK(t2, so)
x = 10**(so - 1) + k - 1
tx = t2 - (k - 1) *so

output1 = str(x)[tx - 1]

print(output1)
print(x)





# print(t, so)