from math import *
def nguyento(n):
    if n<2:
        return False
    for i in range(2,isqrt(n)+1):
        if n%i==0:
            return False
    return True
#main
n=int(input("hay nhap n "))
max=0
for i in range(1,n+1):
    if n%i==0 and nguyento(i)  and i> max:
        max=i
print(max)
