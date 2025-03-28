a = [1, 2, 8, 10]
m = 24
b = [0] * (m + 1)

for i in range(1, m + 1):
    b[i] = 99999999999999
    for x in a:
        if i >= x:
            if b[i - x] + 1 < b[i]:
                b[i] = b[i - x] + 1
    
print("So to tien it nhat la: ", b[m])