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

def lietKeUoc(n):
    ans = []
    for i in range(1, isqrt(n) + 1):
        if (n % i == 0):
            ans.append(i)
            ans.append(n // i)
    if is_square_number(n):
        ans.pop()
    ans.sort()
    return ans
    
n = (int(input("Nhập N: ")))
print(lietKeUoc(n))

# 9 =  1 9 3 3