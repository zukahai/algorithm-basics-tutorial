from math import isqrt

m = int (input("hay nhap m: "))
n = int (input("hay nhap n: "))

for a in range(1, n+1):
    for b in range(1, n+1):
        c = isqrt(a**2 + b**2)
        if a**2 + b**2 == c**2:
            if a + b + c > m and a + b + c <= n:
                print(a * b / 2)
                print(a, b, c)
                exit()

print("khong co bo ba pytago thoa man")
# a = 1, b = 1, c = 1