# Cho một mảng a gồm n phần tử. (1 ≤ n ≤ 10^5, 1 ≤ a[i] ≤ 10^6)
# Đếm xem các cặp phần tử (a[i], a[j]) i < j sao cho a[i] + a[j] chia het cho K.

k = 3
a = [10, 20, 21, 9, 20] #3 +2 + 1

b = [0] * k # 0 -> k - 1

for x in a:
    b[x % k] += 1

tong = (b[0] - 1) * b[0] // 2 # Tổng hợp chập 2 của b[0]

for i in range(1, (k - 1) // 2 + 1):
    tong += b[i] * b[k - i]


print(b)
print(tong)

# b[k] đếm số lượng của số chia 3 dư k
# b[k] số lần xuất hiện của K trong mảng a

# Các cặp chia hết cho 3 là:
# 1 2 3 4 5 6
# (1, 2), (1, 5), (2, 4), (3, 6), (4, 5)
# 3a + 1 và 3b + 2
# 3a và 3b
# đếm
# Xét b[0] = 

#s  = 1 + 2 + 3 + ... + n
#s  = n + (n - 1) + (n - 2) + ... + 1
#2s = (n + 1) + (n + 1) + (n + 1) + ... + (n + 1)
#2s = (n + 1) * n
#s = n * (n + 1) // 
# 1 tới a: a * (a + 1) // 2
# 1 tới n-1: (n - 1) * n // 2