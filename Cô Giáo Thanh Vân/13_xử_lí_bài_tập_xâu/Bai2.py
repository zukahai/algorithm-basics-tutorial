s = '5trrraann thhhhiii45 ttthannh ta64mmm'

# Tổng các chữ số
tong = 0

for ch in s:
    if ch.isdigit():
        tong += int(ch)

print("Tổng =", tong)

# Xoá của trong s
s1 = ""

for ch in s:
    if ch.isdigit() == False:
        s1 += ch
        
print("S1 =", s1)

# Xoá các ký tự liên tiếp trùng nhau

s2 = s1[0]

for i in range(1, len(s1)):
    if s1[i] != s1[i - 1]:
        s2 += s1[i]

print("S2 =", s2)