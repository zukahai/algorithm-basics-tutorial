def hello(n):
    if n == 0:
        return
    print("Hello", n)
    hello(n-1)

def gt(n):
    if n == 0:
        return 1
    return n * gt(n - 1)

# 1 * 2 * 3 * ... * n
# gt(n): Tính giai thừa của n
# n! = n * (n - 1)!
# gt(n) = n * gt(n-1)