
n = int (input('Nhập N: '))

# f[k]: dùng để lưu Fibonacci thứ k

f = [0] * (n + 1)

f[1] = 1
f[2] = 1

for k in range(3, n + 1):
    f[k] = f[k - 1] + f[k - 2]

print(f[n])


'''
f[k]: dùng để lưu Fibonacci thứ k

- F(1) = 1
- F(2) = 1
- F(n) = F(n-1) + F(n-2) với n > 2

'''