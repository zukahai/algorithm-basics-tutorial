# Tạo số đối xứng thập phân
def taoSoDoiXung(n, type):
    if type == 1:
        return int(str(n) + str(n)[::-1])
    elif type == 2:
        return int(str(n) + str(n)[::-1][1:])

def danhSachSoDoiXungThapPhan(n):
    res = []
    index = 1
    while True:
        x = taoSoDoiXung(index, 1)
        if x <= n:
            res.append(x)
        x = taoSoDoiXung(index, 2)
        if x <= n:
            res.append(x)
        else:
            break
        index += 1
    res.sort()
    return res


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


n = int(input('Nhập N: '))

dsThapPhan = danhSachSoDoiXungThapPhan(n)
dsNhiPhan = danhSachSoDoiXungNhiPhan(n)

dsTong = dsThapPhan + dsNhiPhan

ds = list(set(dsTong))
ds.sort()

print(ds)