a=int(input("hay nhap a: "))
b=int(input("hay nhap b: "))
c= int(input("hay nhap c: "))
d=0
for i in range(a,b+1):
    if i%c==0:
        d+=1
print(d)
