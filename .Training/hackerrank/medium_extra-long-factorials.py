import sys
sys.set_int_max_str_digits(0)

def giaiThua(n):
    ans = 1;
    for i in range(1, n + 1):
        ans *= i;
    return ans;

n = (int)(input())
print(giaiThua(n))