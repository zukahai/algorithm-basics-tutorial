from math import *

def isCp(n):
    return isqrt(n)**2 == n

def isPrime(n):
    if n < 2:
        return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

def danhSachUoc(n):
    ds = []
    for i in range(1, isqrt(n) + 1):
        if n % i == 0:
            ds.append(i)
            ds.append(n // i)
    if (isCp(n)):
        ds.pop()
    ds.sort()
    return ds

def danhSachUocNguyenTo(n):
    ds = danhSachUoc(n)
    dsNguyenTo = []
    for x in ds:
        if isPrime(x):
            dsNguyenTo.append(x)
    return dsNguyenTo

m = int (input("hay nhap m: "))
n = int (input("hay nhap n: "))

if (danhSachUocNguyenTo(m) == danhSachUocNguyenTo(n)):
    print(m, "va", n, " la nguyen to tuong duong")
else:
    print(m, "va", n, " khong la nguyen to tuong duong")
