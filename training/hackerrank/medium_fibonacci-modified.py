import sys
sys.set_int_max_str_digits(0)

def fibonacciModified(t1, t2, n):
    if n == 1:
        return t1
    if n == 2:
        return t2
    for i in range(3, n+1):
        t3 = t1 + t2*t2
        t1 = t2
        t2 = t3
    return t3

if __name__ == '__main__':
    t1, t2, n = map(int, input().split())
    print(fibonacciModified(t1, t2, n))