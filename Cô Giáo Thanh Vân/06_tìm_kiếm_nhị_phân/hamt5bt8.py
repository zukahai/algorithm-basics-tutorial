from math import *

x = int (input("Nhập X: "))

for a in range(1, x+1):
    for b in range(a, x+1):
        c = isqrt(a*a + b*b)
        if c*c == a*a + b*b and a + b + c == x:
            print(1)
            exit()
    
print(0)