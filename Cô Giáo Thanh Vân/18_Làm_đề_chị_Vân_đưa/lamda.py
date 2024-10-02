a = [1, 2, 3, 4]
b = []

#Cách 1
# for i in range(len(a)):
#     b.append(a[i] * 2)

# Cách 2: lambda

b = list(map(lambda x: "Hello" + str(x), a))

print(b)