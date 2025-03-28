from math import *
# Số hoàn hảo
# Đếm số lượng ước của N
# Đếm số lượng ước số lẻ của N
# Đưa ra danh sách ước của N

# Nếu như i là ước của N thì N//i cũng là ước của N

def is_square_number(n):
    p = sqrt(n)
    if p == int(p):
        return True
    return False

def demUoc(n):
    dem = 0
    for i in range(1, isqrt(n) + 1):
        if (n % i == 0):
            dem += 2
    if is_square_number(n):
        dem -= 1
    return dem
n = (int(input("Nhập N: ")))

print(demUoc(n))