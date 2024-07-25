from math import *
def hh(n):
    s=0
    for i in range(1,floor(n/2)+1):
        if n%i==0:
         s+=i
    if s==n:
        return True
    else:
        return False
#main
n=int(input("nhap so nguyen n: "))
if hh(n)==True:
    print("yes")
else:
    print("no")
