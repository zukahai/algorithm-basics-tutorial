from math import *
def nguyento(n):
    if n<2:
        return False
    for i in range(2,isqrt(n)+1):
        if n%i==0:
            return False
    return True
def ptnt(n):
    i=2
    d=0
    while n>1:
        if n%i==0:
            d+=1
            n//=i
        else:
            i+=1
    return d

        
#main
n=int(input("hay nhap n "))
max=0
for i in range(1,n+1):
    if ptnt(i)>=max:
        max=ptnt(i)
        so=i

print("so co nhieu nhan tu nhat sau khi lam phep phan tich la ",so,"=",end="")
i=2
while n>1:
    if so%i==0 and nguyento(i):
        print(i,end="")
        so//=i
        if so>1:
            print("*",end="")
    else:
        i+=1
#print(max)
    
    
    

