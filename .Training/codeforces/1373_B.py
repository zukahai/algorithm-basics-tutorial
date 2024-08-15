
# https://codeforces.com/contest/1373/problem/B

for _ in range(int(input())):
    s = input()
    print('DA' if min(s.count('0'), s.count('1')) % 2 == 1 else 'NET')