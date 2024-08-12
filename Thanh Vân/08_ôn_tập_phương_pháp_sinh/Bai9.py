# Tạo số đối xứng thập phân
def taoSoDoiXung(n, type):
    if type == 1:
        return str(n) + str(n)[::-1]
    elif type == 2:
        return str(n) + str(n)[::-1][1:]


def danhSachSoDoiXungNhiPhan(n):
    res = ["0"]
    index = 1
    while True:
        nhiPhan = bin(index)[2:]
        x = taoSoDoiXung(nhiPhan, 1)
        if int (x, 2) <= n:
            res.append(str(x))
        x = taoSoDoiXung(nhiPhan, 2)
        if int (x, 2) <= n:
            res.append(str(x))
        else:
            break
        index += 1
    res = list(map(lambda x: int(x, 2), res))
    res.sort()
    return res

m = 5
n = 10
l = danhSachSoDoiXungNhiPhan(n)

for x in l:
    if x >= m:
        print(str(x), str(bin(x))[2:])

            

