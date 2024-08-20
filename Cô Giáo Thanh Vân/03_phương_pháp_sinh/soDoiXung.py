from math import *

# 10000000000000000
# 11111111111111111
# 01111111111111111

# Tìm số abc -> Suỹ nghĩ tạo ra dc số abc không

# Tìm số chính phương nhỏ nhất >= n
# n = 10, kết quả 16

# 0 1 4 9 16 25 36 49 64 81 100 ....
# 0 1 2 3 4  5  6  7  8  9  10

# Tìm số x nhỏ nhất >= n chia hết cho 10
# Ví dụ n = 103, kết quả 110
# Ví dụ n = 123, kết quả 130
# k * 10
# Tạo ra bằng nhân 10, -> tìm thì chia 10
# Số chính phương, tạo ra bằng bình phương, tìm sẽ bằng cách căn bậc 2


# 1 2 3 4 5 6 7 8 9
# 11 22 33 44 55 66..
# 111 222 333 444 555 

def taoSoSieuDx(doDai, giaTri):
    ans = 0
    for i in range(1, doDai + 1):
        ans *= 10
        ans += giaTri
    return ans

n = int(input('Nhập N: '))

l = len(str(n))

for i in range(1, 10):
    soSieuDx = taoSoSieuDx(l, i)
    if soSieuDx >= n:
        print(soSieuDx)
        break

# Phương pháp sinh

# Số chính phương nhỏ nhất >= n

# k = ceil(sqrt(n))
# print(k * k)