n = int(input())
target = input()
strings = [input().strip() for _ in range(n)]

target_length = len(target)
min_steps = [float('inf')] * (target_length + 1)
min_steps[0] = 0

for i in range(1, target_length + 1):
    for string in strings:
        if i >= len(string) and target[i - len(string):i] == string:
            min_steps[i] = min(min_steps[i], min_steps[i - len(string)] + 1)

result = min_steps[target_length]
print(result)
