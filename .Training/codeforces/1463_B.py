for t in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	s = sum(a)
	cur = [0, 0]
	for i in range(n):
		cur[i % 2] += a[i] - 1
	for j in range(2):
		if 2 * cur[j] > s:
			continue
		for i in range(n):
			if i % 2 == j:
				a[i] = 1
		break
	print(*a)