def hello(n):
    if n <= 0:
        return
    print("Hello", n)
    hello(n-1)
    hello(n-2)

hello(3)