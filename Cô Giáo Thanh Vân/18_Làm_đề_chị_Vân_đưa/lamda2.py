# a = ["Thanh", "Van", "Ha", "Huy", "Hung"]
# b = []

# # Sắp xếp tăng dần theo length của 

# [5, 3, 2, 4, 4]

# b = sorted(a, key=lambda x: x[-1])

# print(b)

s = "Thanh Van Ha Huy Hung"
p = lambda x: len(x)
print(p(s))