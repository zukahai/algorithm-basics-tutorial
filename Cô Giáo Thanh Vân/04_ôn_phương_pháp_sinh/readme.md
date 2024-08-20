
a = [2, 3, 5, 7] # các số siêu nguyên tố

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

for x in a:
    for i in range(1, 10):
        