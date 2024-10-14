m, n = map(int, input().split())

x = abs(m - n)
n = min(m, n)

res = n * (n + 1) * (2 * n + 1 + 3 * x) // 6
print(res % 1000000007)