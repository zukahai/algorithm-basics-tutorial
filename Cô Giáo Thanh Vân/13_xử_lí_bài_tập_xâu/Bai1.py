s = "hsg8ngay21thang4nam2023";
# a lọc số các chữ số
a = "";
for i in s:
    if i.isdigit():
        a +=i

print("A =", a)
        
# Xoa 1 so ky tự để dc số chia hết cho 5

chiSoCuoi = -1

for i in range(len(a) - 1, -1, -1):
    if a[i] == '0' or a[i] == '5':
        chiSoCuoi = i + 1
        break

if chiSoCuoi == -1:
    print("KHONG")
else:
    b = a[0:chiSoCuoi]
    print("B =", b)

# Tính tổng các chữ số

s = s + ' '
tong = 0
temp = ''

for ch in s:
    if ch.isdigit():
        temp += ch
    else:
        if temp != '':
            tong += int(temp)
            temp = ''

print("Tổng =", tong)


'''
tong = 86

temp = 2023

hsg84ng2ay21thang4nam2023


'''