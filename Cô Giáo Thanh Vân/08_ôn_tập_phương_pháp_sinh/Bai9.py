# Tạo số đối xứng thập phân
def taoSoDoiXung(n, type):
    if type == 1:
        return str(n) + str(n)[::-1]
    elif type == 2:
        return str(n) + str(n)[::-1][1:]


def danhSachSoDoiXungNhiPhan(n):
    res = []
    x = 0
    while True:
        s = bin(x)[2:]
        k = taoSoDoiXung(s, 1) # tạo số đối xứng từ chuỗi nhị phân s
        if int(str(k), 2) <= n: # chuyển k về hệ 10 để so sánh
            res.append(int(str(k), 2))
        k = taoSoDoiXung(s, 2)
        if int(str(k), 2) <= n:
            res.append(int(str(k), 2))
        else:
            break
        x += 1
    res.sort()
    return res

m = 5
n = 100
l = danhSachSoDoiXungNhiPhan(n)
l = list(set(l))
l.sort()

for i in range(len(l)):
    if l[i] >= m:
        print(l[i], ":", str(bin(l[i]))[2:], end='')
        if i < len(l) - 1:
            print("; ", end='')
        else:
            print(".")
    

# 0 -> 00
# 0 -> 0

            

