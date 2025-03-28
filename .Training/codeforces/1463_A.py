for i in range(int(input())):
	a, b, c = map(int, input().split())
	if (a + b + c) % 9 != 0:
		print("NO")
	else:
	    print("YES" if min(a, b, c) >= (a + b + c) // 9 else "NO")