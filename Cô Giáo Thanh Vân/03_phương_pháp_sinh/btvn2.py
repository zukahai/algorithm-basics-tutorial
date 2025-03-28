a = [1000000000000000000000, 1000000000000000000000, 9999999999999999]

b = {} # json: {key: value}
# key: value

for x in a:
    if x in b:
        b[x] += 1
    else:
        b[x] = 1

for k, v in b.items():
    print("Số", k, "xuất hiện", v, "lần")