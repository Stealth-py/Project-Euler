import math

for _ in range(int(input())):
    n = int(input())
    max_ = -1
    for i in range(1, n // 2 + 1):
        b = (i * i - (i - n) * (i - n)) / (2 * (i - n))
        c = int(math.sqrt(i * i + b * b))
        if i + b + c == n:
            if max_ < i * b * c:
                max_ = i * b * c
    if max_ == 0:
        max_ = -1
    print(int(max_))