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

def is_perfect_number(n):
    sum = 0
    for i in range(1, isqrt(n) + 1):
        if (n % i == 0):
            sum += i
            sum += n // i
    if is_square_number(n):
        sum -= isqrt(n)
    sum -= n
    return sum == n

n = (int(input("Nhập N: ")))

print(is_perfect_number(n))