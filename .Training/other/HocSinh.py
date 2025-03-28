n = int(input('Nhập số lượng học sinh: '))

names = []
heights = []

for i in range(n):
    print('Học sinh thứ', i + 1)
    name = input('Tên: ')
    height = int(input('Chiều cao: '))
    names.append(name)
    heights.append(height)

print('Danh sách học sinh:')

for i in range(n):
    print('Học sinh', i + 1, ':', end=' ')
    print('Tên:', names[i], end=', ')
    print('Chiều cao:', heights[i])

def average_height(heights):
    sum_height = 0
    for height in heights:
        sum_height += height
    return sum_height / len(heights)

print('Chiều cao trung bình:', average_height(heights))