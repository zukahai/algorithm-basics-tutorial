s = input("Nhập chuỗi: ")
n = int(input("Nhập số N: "))
s = s.split()
m = {}
for x in s:
    if x in m:
        m[x] += 1
    else:
        m[x] = 1

# Săp xếp theo giá trị
m = sorted(m.items(), key=lambda x: x[1], reverse=True)

for k, v in m[:n]:
        print(k, v)