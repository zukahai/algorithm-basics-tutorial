# https://codeforces.com/contest/1452/problem/C

def calc(s, x, y):
	bal, cnt = 0, 0
	for c in s:
		if c == y:
			if bal > 0:
				bal -= 1
				cnt += 1
		elif c == x:
			bal += 1
	return cnt

for _ in range(int(input())):
	s = input()
	print(calc(s, '(', ')') + calc(s, '[', ']'))