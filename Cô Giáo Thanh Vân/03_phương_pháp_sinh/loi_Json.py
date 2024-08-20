a = ["abc", "def", "ghi", "abc"]

b = {}

for x in a:
    if x in b:
        b[x] += 1
    else:
        b[x] = 1

for k, v in b.items():
    print("Chuỗi", k, "xuất hiện", v, "lần")