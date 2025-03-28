n = 10
a = [0] * (n + 1)
#a[k]: Gán giá trị đang chạy của for thứ k
#a[k]: Cho biết for thứ k đang chạy ở giá trị nào

def vongFor(thuTu):
    if thuTu == n + 1:
        print(a[1:]) # In ra a[1] đến a[n]
        return
    for i in range(1, 4):
        a[thuTu] = i
        vongFor(thuTu + 1)

if __name__ == '__main__':
    vongFor(1)
