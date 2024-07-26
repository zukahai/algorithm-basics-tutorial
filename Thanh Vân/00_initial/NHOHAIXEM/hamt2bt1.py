def sdx(n):
    dv=n%10
    while n>0:
        if dv!=n%10:
            return False
        n//=10
    return True
#main
a=int(input("hay nhap a: "))
while True:
   if sdx(a)==True:
       break
   else:
        a+=1
print(a)
    
