6
1 2 2 1 1 5

d[1] = 3
d[2] = 2
d[3] = 0
d[4] = 0
d[5] = 1
...
d[1000008] = 0

vector <int> d(1000009)

d[k]: Chính là số lần xuất hiện của số k

for (int i = 1; i <= n; i++) {
	// gặp a[i], thì a[i] xuất hiện thêm 1 lần
	d[a[i]] += 1
}