# Ghi file output.txt

# Mở file output.txt để ghi dữ liệu
f = open("output.txt", "w")

# Ghi dữ liệu vào file
'''
n = 2
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20


'''

for i in range(1, 11):
    f.write(f'{2} x {i} = {2 * i}\n')