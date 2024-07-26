def dcs(n):
    d=0
    while n>0:
        n//=10
        d+=1
    return d
def tcs(n):
    s=0
    while n>0:
        s+=n%10
        n//=10
    return s
def dx(n):
    dx=0
    while n>0:
        k=n%10
        n//=10
        dx=dx*10+k
    return dx
#main
a=int(input("nhap a: "))
print("so chu so cua ",a," la:",dcs(a))
print("tong chu so cua ",a,"la:",tcs(a))
print(" so doi xung voi ",a," la:", dx(a))
b=int(input("nhap b: "))
tongdx= dx(dx(a)+dx(b))
print("tong doi xung cua ",a,"va ",b,"la:",tongdx)
      
