N = 10
K = 9

a = [0] * (K + 1)
# a[k]: Giá trị vòng lặp thứ k

def vongFor(thuTu):
    if thuTu == K + 1:
        print(a[1:])
        return

    for i in range(a[thuTu - 1] + 1, N + 1):
        a[thuTu] = i
        vongFor(thuTu + 1)

vongFor(1)
