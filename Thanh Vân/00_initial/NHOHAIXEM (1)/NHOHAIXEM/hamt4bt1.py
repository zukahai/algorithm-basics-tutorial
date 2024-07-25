from math import *
def nguyento(n):
    if n<2:
        return False
    for i in range(2,isqrt(n)+1):
        if n%i==0:
            return False
    return True
#main
n=int(input("hay nhap n: "))
a=n
print(n,"=",end=" ")
i=2
while n>1:
    if n%i==0:
        print(i,end=" ")
        n//=i
        if n>1:
            print("*",end=" ")
    else:
        i+=1
print("\n")
print(a,"so nguyen to dau tien")
d=0
i=2
while d!=a:
    if nguyento(i):
        print(i,end=" ")
        d+=1
    i+=1
    
   
    
        
        
