n = int (input())

s = n
x = n - 1

s += (x * (x + 1) * (2 * x + 1) // 6 + x * (x + 1) // 2) // 2

print (s)