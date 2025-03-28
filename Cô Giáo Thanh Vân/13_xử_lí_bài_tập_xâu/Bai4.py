# Số trước < số sau -> xoá số trước

s = '4935'
k = 2

for i in range(k):
    index = len(s) - 1 # Mặc định xoá số cuối cùng
    for j in range(len(s) - 1):
        if s[j] < s[j + 1]:
            index = j
            break
    s = s[0:index] + s[index+1:] # Xoá ký tự tại vị trí index

print(s)