# https://codeforces.com/contest/1223/problem/B
for t in range(int(input())):
    print('NO' if len(set(input()) & set(input())) == 0 else 'YES')