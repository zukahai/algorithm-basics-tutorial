def demo(so):
    if so in [0,4,6,9]:
        return 1
    elif so in [1,2,3,5,7]:
        return 0
    elif so in [8]:
        return 2
    
def xuLi(n):
    st=str(n)
    a=list(map(int,st))
    s=0
    for x in a:
            s+= demo(x)
    return s


#n=fi.read()
# n=int(input("nhap n: "))
# print(xuLi(n))
fi = open("DEMO.inp", "r")
fo = open("DEMO.out", "w")

for line in fi:
    n = int(line)
    kq = xuLi(n)
    fo.write(str(kq) + "\n")

fi.close()
fo.close()

print("Đã xử lý xong")