'''

4
1 2 3 3 1
31213

'''

n = 5
a = [1, 1, 1, 1, 1, 1, 2, 2, 5, 5, 5, 0, 0]

b = {}

for x in a:
    if x in b:
        b[x] += 1
    else:
        b[x] = 1

print(b)

giua = -1 # Luu so xuat hien le lan

for k, v in b.items():
    if v % 2 == 1:
        if giua != -1:
            print("NONE");
            exit()
        giua = k
    
ketQua = ""
if giua != -1:
    ketQua = str(giua)
    b[giua] -= 1

for k in range(0, 10):
    if k in b:
        while b[k] > 0:
            ketQua = str(k) + ketQua + str(k)
            b[k] -= 2
    
print(ketQua)

# Cách 2
b = [0] * 10

for x in a:
    b[x] += 1

giua = -1 # Luu so xuat hien le lan

for k in range(0, 10):
    if b[k] % 2 == 1:
        if giua != -1:
            print("NONE");
            exit()
        giua = k

ketQua = ""
if giua != -1:
    ketQua = str(giua)
    b[giua] -= 1

for k in range(0, 10):
    while b[k] > 0:
        ketQua = str(k) + ketQua + str(k)
        b[k] -= 2

print(ketQua)
