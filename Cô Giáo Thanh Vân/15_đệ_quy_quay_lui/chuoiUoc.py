s = 'abaabaaba'

'''
x = 'a'
x = 'ab'
x = 'abc'
x = 'abcd'

'''

def chuoiUoc(s, x):
    if len(s) % len(x) != 0:
        return False
    k = len(s) // len(x)
    if x * k == s:
        return True
    return False

def uoc(s):
    n = len(s)
    for i in range(1, n):
            x = s[0:i]
            if chuoiUoc(s, x):
                return x
    return s

print(uoc(s))

# In ra ước số lẻ lớn nhất của n.
# n = 18, in ra 9