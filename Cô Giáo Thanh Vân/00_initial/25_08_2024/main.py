# Đọc file van.inp

a = []
fi = open('van.inp', 'r')
for line in fi:
    a.append(int(line))

# Xử lý
a = sorted(a)

# Ghi file van.out
fo = open('van.out', 'w')
for i in a:
    fo.write(str(i) + '\n')
