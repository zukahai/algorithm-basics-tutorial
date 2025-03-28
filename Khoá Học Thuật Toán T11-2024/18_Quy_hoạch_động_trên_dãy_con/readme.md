6
4 2 8 7 0 1

Số lượng dãy con: n * (n + 1) / 2

Quy hoạch động trên dãy con liên tiếp
4 2 8 7 0 1
4 2 8 7 0
2 8 7 0 1 
4 2 8 7
2 8 7 0
8 7 0 1
4 2 8
2 8 7
8 7 0
7 0 1
4 2
2 8
8 7
7 0
0 1
4
2
8
7
0
1

...


6
4 2 8 7 0 1

Xác định dãy con:
- Chỉ số bắt đầu: start
- Chỉ số kết thúc: end
- Độ dài dãy con: len
end - start = len + 1
start = end - len + 1
len = end - start - 1

- start = 1, end = 4. Dãy con: 2 8 7 0
- start = 4, end = 5, Dãy con: 0 1
- start = 2, len = 3, Dãy con: 8 7 0
- start = 3, len = 2, Dãy con: 7 0
- end = 5, len = 4, Dãy con: 8 7 0 1
- end = 4, len = 2, Dãy con: 7 0

In ra 1 dãy con:
6
4 2 8 7 0 1

start = 1, end = 3;

for (int i = start; i <= end; i++)
	cout << a[i] << " ";

end = 4, len = 3
start = end - len - 1


