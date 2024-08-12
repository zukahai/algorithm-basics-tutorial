# Tạo số đối xứng thập phân
def taoSoDoiXung(n, type):
    if type == 1:
        return int(str(n) + str(n)[::-1])
    elif type == 2:
        return int(str(n) + str(n)[::-1][1:])

def danhSachSoDoiXung(n):
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
    for x in range(0, n+1):
        s = bin(x)[2:]
        res.append(taoSoDoiXung(s, 1))
        res.append(taoSoDoiXung(s, 2))
    res.sort()
    return res

# n = int(input('Nhập N: '))
# l = (danhSachSoDoiXung(n))
# for x in l:
#     print(x, end=' ')

danhSachSoDoiXungThapPhan = danhSachSoDoiXung(10000)
danhSachNhiPhan = []

for x in danhSachSoDoiXungNhiPhan(100):
    danhSachNhiPhan.append(int (str(x), 2))

danhSachTong = danhSachSoDoiXungThapPhan + danhSachNhiPhan

danhSachTong = list(set(danhSachTong))
danhSachTong.sort()

n = int(input('Nhập N: '))
s = int(input('Nhập S: '))

count = 0
for x in danhSachTong:
    if x >= s:
        print(x, end=' ')
        count += 1
    if count == n:
        break

'''

243 -> 243342, 24342

1011 -> 10111101, 1011101

12344321

'''


