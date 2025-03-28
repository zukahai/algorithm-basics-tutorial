a=[]
n=int(input("nhap so phan tu "))
for i in range(n):
    print("nhap phan tu thu ",i,": ",end=" ")
    x=int(input())
    a.append(x)
b=a.copy()
print(b)
s=0
for x in a:
    if x%2!=0:
        s+=x
print("a.tong phan tu la so le trong mang ",s)
s1=0
for i in range(n):
    if i%2==0:
        s1+=a[i]
print("b.tong cac phan tu o vi tri chan",s1)
for i in range(n-1,-1,-1):
    if a[i]<0:
        a.remove(a[i])
print("mang sau khi xoa cac phan tu nho hon 0",a)
m=max(b)
cs=b.index(m)
print("c.vi tri cua phan tu co gia tri lon nhat trong mang", cs)
for i in range(n):
    if b[i]<0:
        b.remove(b[i])
        b.insert(i,0)


print("d. Các vị trí của phần tử lớn nhất")
m = max(b)
for i in range(n):
    if b[i] == m:
        print(i, end=" ")
