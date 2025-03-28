# for i in range(1, 4):
#     for j in range(i, 4):
#         for k in range(j, 4):
#             print(i, j, k)

n = 5
a = [0] * (n + 1)
a[0] = 3
#a[k]: Gán giá trị đang chạy của for thứ k
#a[k]: Cho biết for thứ k đang chạy ở giá trị nào

def vongFor(thuTu):
    if thuTu == n + 1:
        print(a[1:]) # In ra a[1] đến a[n]
        return
    for i in range(a[thuTu - 1], 0, -1):
        a[thuTu] = i
        vongFor(thuTu + 1)

if __name__ == '__main__':
    vongFor(1)


'''

3

3 3 3
3 3 2
3 3 1
3 2 2
3 2 1
3 1 1
2 2 2
2 2 1
2 1 1
1 1 1

# for i in range(3, 0, -1):
#     for j in range(i, 0, -1):
#         for k in range(j, 0, -1):
#             print(i, j, k)



'''