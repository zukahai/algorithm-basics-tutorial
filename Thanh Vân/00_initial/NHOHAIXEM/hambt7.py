from math import *
def ham7(n):
    for i in range(2,isqrt(n)+1):
        if n%i==0:
            kq=i
            while n%i==0:
                n//=i
    if n>1:
         kq=n
    return kq
#main
n=int(input("hay nhap n: "))
print(ham7(n))
        
