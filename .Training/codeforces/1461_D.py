q = set()
a = []
 
def go(l, r):
	global a, q
 
	sum = 0
	for i in range(l, r + 1):
		sum += a[i]
	q.add(sum)
 
	mid = (a[l] + a[r]) // 2
 
	pos = -1
	for i in range(l, r + 1):
		if a[i] <= mid:
			pos = i
		else:
			break
 
	if pos == -1 or pos == r:
		return
 
	go(l, pos)
	go(pos + 1, r)
 
 
def solve():
	global a, q
	n, m = map(int, input().split())
	a = list(map(int, input().split()))
 
	q = set()
	a.sort()
	go(0, n - 1)
 
	for _ in range(m):
		x = int(input())
 
		if x in q:
			print('YES')
		else:
			print('NO')
 
tests = int(input())
 
while (tests > 0):
	solve()
	tests = tests - 1