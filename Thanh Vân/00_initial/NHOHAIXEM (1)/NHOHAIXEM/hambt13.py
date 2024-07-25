def ham13(n):
    dv=n%10 #tach chu so hang don vi
    while n>0:
        if dv!=n%10: so sanh so hang dv vơi cac so khac ma minh tach
            return 0
        n//=10
    return 1
#main
n=int(input("hay nhap n: "))
print(ham13(n))
        
