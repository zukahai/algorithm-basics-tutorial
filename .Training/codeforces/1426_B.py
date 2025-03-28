# https://codeforces.com/contest/1426/problem/B

for i in range(int(input())):
	n, m = map(int, input().split())
	a = []
	for i in range(n):
		a.append([[int(x) for x in input().split()] for i in range(2)])
	ok = False
	for i in range(n):
		ok |= a[i][0][1] == a[i][1][0]
	ok &= m % 2 == 0
	print("YES" if ok else "NO") 