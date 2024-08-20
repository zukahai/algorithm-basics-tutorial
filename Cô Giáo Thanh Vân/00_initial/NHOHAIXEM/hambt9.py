from math import *
def cp(n):
    s=0
    for i in range(1,n//2+1):
        if i**2==n:
            s+=1
    if s!=0:
        return True
    else:
        return False
#main
n=int(input("hay nhap n "))
if cp(n)==True:
    print("yes")
else:
    print("no")
