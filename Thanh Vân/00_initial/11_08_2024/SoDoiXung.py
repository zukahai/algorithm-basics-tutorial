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

n = int(input('Nhập N: '))
l = (danhSachSoDoiXung(n))
for x in l:
    print(x, end=' ')



