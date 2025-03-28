#4 6 1 3 2 3 9 7 8 3
a = [4, 6, 1, 3, 2, 3, 9, 7, 8, 3]
t = [0] * len(a)

b = [0] * len(a)

b[0] = 1
t[0] = -1

for k in range(1, len(a)):
    m = 0
    t[k] = -1
    for i in range(k):
        if a[k] > a[i]and b[i] > m:
            m = b[i]
            t[k] = i
    b[k] = m + 1

m = b[0]
end = 0

for i in range(1, len(a)):
    if b[i] > m:
        m = b[i]
        end = i
        
kq = []
kq.append(a[end])

while t[end] != -1: # Truy vết từ cuối lên đầu
    viTriTruoc = t[end] # Vị trí trước đó
    kq.append(a[viTriTruoc]) # Thêm vào kết quả
    end = viTriTruoc # Cập nhật lại vị trí cuối cùng

print(kq[::-1])