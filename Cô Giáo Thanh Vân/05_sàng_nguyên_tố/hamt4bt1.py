from math import *

#a
n = int(input("Nhập số nguyên dương n: "))
nTem = n

print(n, "=", end=" ")
for i in range(2, isqrt(n) + 1):
    if n % i == 0:
        while n % i == 0:
            print(i, end=" ")
            n //= i
            if n > 1:
                print("*", end=" ")
if n > 1:
    print(n)

n = nTem

#b
print("\n", n, "Số nguyên tố đầu tiên là: ", end=" ")
# Sàng nguyên tố
N = 10 * n # Giới hạn sàng
b = [True] * N
b[0] = b[1] = False

for k in range(2, isqrt(N)+1):
    if b[k] == True:
        for i in range(k * k, N, k):
            b[i] = False

dem = 0
index = 2
while dem < n:
    if b[index] == True:
        dem += 1
        print(index, end=" ")
    index += 1