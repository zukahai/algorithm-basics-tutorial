import math

def area(x1, y1, x2, y2, x3, y3):
    return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2

def checkTriangle(x1, y1, x2, y2, x3, y3, xTest, yTest):
    a = area(x1, y1, x2, y2, x3, y3)
    a1 = area(xTest, yTest, x2, y2, x3, y3)
    a2 = area(x1, y1, xTest, yTest, x3, y3)
    a3 = area(x1, y1, x2, y2, xTest, yTest)
    return 1 if (a == a1 + a2 + a3 ) else 0;

def main():
    x1, y1 = map(int, input().split())
    x2, y2 = map(int, input().split())
    x3, y3 = map(int, input().split())
    n = int(input())
    count = 0
    for i in range(n):
        xTest, yTest = map(int, input().split())
        count += checkTriangle(x1, y1, x2, y2, x3, y3, xTest, yTest)
    print("{:.1f}".format(area(x1, y1, x2, y2, x3, y3)))
    print(count)

if __name__ == "__main__":
    main()