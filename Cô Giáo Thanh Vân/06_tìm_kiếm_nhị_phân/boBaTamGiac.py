n = 3

ketQua = 0

for a in range(1, n + 1):
    for b in range(a, n + 1):
        ketQua += a
        if a + b > n:
            ketQua -= (a + b - 1 - n)

print(ketQua)

'''

1 1 : 1
1 2 : 1
1 3 : 1
2 2 : 2
2 3 : 3 -> 4
3 3 : 3 -> 5

'''