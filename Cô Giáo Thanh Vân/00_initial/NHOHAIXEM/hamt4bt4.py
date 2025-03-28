from math import *
def nguyento(n):
    if n<2:
        return False
    for i in range(2,isqrt(n)+1):
        if n%i==0:
            return False
    return True
def dunt(n):
    d=0
    for i in range(1,n+1):
        if n%i==0 and nguyento(i):
            d+=1
    return d
#main
m=int(input("hay nhap m: "))
n=int(input("hay nhap n: "))
if dunt(m)==dunt(n):
    print(m, "va",n," la nguyen to tuong duong")
else:
     print(m, "va",n," khong la nguyen to tuong duong")
