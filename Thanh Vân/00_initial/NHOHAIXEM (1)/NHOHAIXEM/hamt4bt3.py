from math import *
def nguyento(n):
    if n<2:
        return False
    for i in range(2,isqrt(n)+1):
        if n%i==0:
            return False
    return True
def ntrg(n):
    s=0
    for i in range(2,n+1):
        if n%i==0 and nguyento(i):
         s+=i
    return s
#main
n=int(input("hay nhap n "))
print("so nguyen to rut gon cua ",n," la",ntrg(n))
a=int(input(" hay nhap a "))
b=int(input(" hay nhap b "))
d=0
for i in range(a,b+1):
    if ntrg(i)==ntrg(n):
        print(i,end=" ")
        d+=1
print("\n")
print("tu ",a, "den",b," co ",d," so nguyen to rut gon")

          
