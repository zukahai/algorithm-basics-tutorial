def inside(l, r, x):
	return min(l, r) <= x <= max(l, r)

def sg(x):
	return -1 if x < 0 else int(x > 0)

for _ in range(int(input())):
	n = int(input())
	qs = []
	for i in range(n):
		qs.append(list(map(int, input().split())))
	qs.append([4*10**9, 0])
	ans = 0
	pos, dr, lft = 0, 0, 0
	for i in range(n):
		t, x = qs[i]
		tn = qs[i + 1][0]
		if lft == 0:
			lft = abs(pos - x)
			dr = sg(x - pos)
		tmp = min(lft, tn - t)
		if inside(pos, pos + dr * tmp, x):
			ans += 1
		pos += dr * tmp
		lft -= tmp
	print(ans)