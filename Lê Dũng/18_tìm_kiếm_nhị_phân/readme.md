```
5
4 7 5
q = 3
i = 1
x = 3aq - ai
s: 11 9 12

3aq = ai + aj + ak
3aq - ai = aj + ak
Đặt x = 3aq - ai
x = aj + ak

res = 0
for q := 1 to n:
	for i:= 1 to n:
		x = 3aq - ai
		count = get(s, x)
		count -= get(a, x - ai)	
		if count > 0:
			res++
```