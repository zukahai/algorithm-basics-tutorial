# 2 -1 3 -1 -7 8 1
a = [2, -1, 3, -1, -7, 8, 1]
b = [0] * len(a)
t = [0] * len(a)

b[0] = a[0]
t[0] = -1
b[1] = a[0] + a[1]
t[1] = 0

if b[0] > b[1]:
    b[2] = b[0] + a[2]
    t[2] = 0
else:
    b[2] = b[1] + a[2]
    t[2] = 1

for k in range(3, len(a)):
    m = b[k - 3]
    t[k] = k - 3
    if b[k - 2] > m:
        m = b[k - 2]
        t[k] = k - 2
    if b[k - 1] > m:
        m = b[k - 1]
        t[k] = k - 1
    b[k] = m + a[k]

print(t)

kq = []
kq.append(a[-1]) # Thêm phần tử cuối cùng vào kết quả
end = len(a) - 1 # Ví trí cuối cùng


while t[end] >= 0: # Truy vết từ cuối lên đầu
    viTriTruoc = t[end] # Vị trí trước đó
    kq.append(a[viTriTruoc]) # Thêm vào kết quả
    end = viTriTruoc # Cập nhật lại vị trí cuối cùng

print(kq[::-1]) # In kết quả
