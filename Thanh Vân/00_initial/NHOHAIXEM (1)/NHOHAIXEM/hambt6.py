from math import *
def ham6(n):
    dem=0
    for i in range(2,isqrt(n)+1):
        if n%i==0:
            dem+=1
            while n%i==0:
                n//=i
        if n>1:
            dem+=1
        return dem
#main
n=int(input("hay nhap n "))
print(ham6(n))
