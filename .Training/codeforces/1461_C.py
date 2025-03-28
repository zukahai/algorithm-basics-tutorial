def solve(n, m):
    a = list(map(int, input().split()))
    lastCorrectPos = n - 1;
    while lastCorrectPos >= 0 and a[lastCorrectPos] == lastCorrectPos + 1:
        lastCorrectPos -= 1
    
    ans = 1.0
    if lastCorrectPos == -1:
        ans = 0.0
    
    
    for _ in range(m):
        data = input().split()
        r = int(data[0]) - 1
        p = float(data[1])
        
        if r >= lastCorrectPos:
            ans = ans * (1 - p)
        
    
    print("{:.6f}".format(1 - ans))
 
 
t = int(input())
for _ in range(t):
    data = input().split()
    solve(int(data[0]), int(data[1]))