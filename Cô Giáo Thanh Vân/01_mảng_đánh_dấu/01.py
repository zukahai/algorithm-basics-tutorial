import math

# n = int(input())
# a = list(map(int, input().split()))

# flag = False

# for i in a:
#     if i % 2 == 0:
#         flag = True
#         print(i, end=' ')
    
# if not flag:
#     print(-1)

def isPrime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

a = [1, 2, 3, 4, 5]
b = map(int, a)

print(list(b))