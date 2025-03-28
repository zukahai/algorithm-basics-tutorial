t = int (input('Nhập T: '))

s = ''
index = 0

while len(s) < t:
    index += 1
    s += str(index)

print(s[t - 1])
print(index)