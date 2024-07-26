from math import *
def ham6(n):
    print(n," = ", end="")
    for i in range(2,isqrt(n)+1):
        if n%i==0:
            while n%i==0: # Xoá đi các thừa số i trong n
                print(i,end="")
                n//=i
                if n > 1:
                    print("*", end="")
                
    if n>1:
        print(n,end=" ")
#main
n=int(input("hay nhap n "))
ham6(n)